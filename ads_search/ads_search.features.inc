<?php
/**
 * @file
 * ads_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ads_search_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function ads_search_default_search_api_index() {
  $items = array();
  $items['ads_adverts'] = entity_import('search_api_index', '{
    "name" : "Adverts",
    "machine_name" : "ads_adverts",
    "description" : null,
    "server" : "ads_search_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "title" : {
          "type" : "text",
          "boost" : 0.1,
          "name" : "Title",
          "description" : "The title of the node.",
          "indexed" : true
        },
        "status" : {
          "type" : "integer",
          "boost" : 0.1,
          "name" : "Status",
          "description" : "Whether the node is published or unpublished.",
          "indexed" : true
        },
        "author" : {
          "type" : "integer",
          "entity_type" : "user",
          "name" : "Author",
          "description" : "The author of the node.",
          "boost" : 1,
          "indexed" : true
        },
        "field_ad_category" : {
          "type" : "integer",
          "entity_type" : "taxonomy_term",
          "name" : "Category",
          "description" : "Field \\u0022field_ad_category\\u0022.",
          "boost" : 1,
          "indexed" : true
        },
        "field_ad_price" : {
          "type" : "decimal",
          "boost" : 0.1,
          "name" : "Price",
          "description" : "Field \\u0022field_ad_price\\u0022.",
          "indexed" : true
        },
        "search_api_language" : {
          "type" : "string",
          "name" : "Item language",
          "description" : "A field added by the search framework to let components determine an item\\u0027s language. Is always indexed.",
          "boost" : 1,
          "indexed" : true
        },
        "body:value" : {
          "type" : "text",
          "boost" : 0.1,
          "name" : "The main body text \\u00bb Text",
          "description" : null,
          "indexed" : true
        },
        "body:summary" : {
          "type" : "text",
          "boost" : 0.1,
          "name" : "The main body text \\u00bb Summary",
          "description" : null,
          "indexed" : true
        },
        "field_ad_category:parent" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "taxonomy_term",
          "name" : "Category \\u00bb Parent terms",
          "description" : "The parent terms of the taxonomy term.",
          "boost" : 1,
          "indexed" : true
        },
        "field_ad_location:tid" : {
          "type" : "integer",
          "name" : "Location \\u00bb Term ID",
          "description" : "The unique ID of the taxonomy term.",
          "boost" : 1,
          "indexed" : true
        },
        "field_ad_location:name" : {
          "type" : "string",
          "boost" : 0.1,
          "name" : "Location \\u00bb Name",
          "description" : "The name of the taxonomy term.",
          "indexed" : true
        }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "advert" : "advert" } }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true, "body:summary" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "body:summary" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "body:summary" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "body:summary" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
