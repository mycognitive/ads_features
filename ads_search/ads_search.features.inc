<?php
/**
 * @file
 * ads_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ads_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ads_search_image_default_styles() {
  $styles = array();

  // Exported image style: ads_thumbnail_listing.
  $styles['ads_thumbnail_listing'] = array(
    'name' => 'ads_thumbnail_listing',
    'label' => 'ads_thumbnail_listing',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 75,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
        "body:summary" : { "type" : "text", "boost" : "0.1" },
        "body:value" : { "type" : "text", "boost" : "0.1" },
        "field_ad_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_ad_category:name" : { "type" : "string" },
        "field_ad_category:parent" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ad_category:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ad_category:tid" : { "type" : "integer" },
        "field_ad_category_node_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_ad_category_node_ref:nid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_ad_location" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_ad_location:name" : { "type" : "string" },
        "field_level_1_field" : { "type" : "decimal" },
        "field_level_2_field" : { "type" : "decimal" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer", "boost" : "0.1" },
        "title" : { "type" : "text", "boost" : "0.1" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "1",
            "bundles" : {
              "article" : "article",
              "page" : "page",
              "cv" : "cv",
              "employer" : "employer",
              "estate_agency" : "estate_agency",
              "job" : "job",
              "job_application" : "job_application",
              "job_per_file" : "job_per_file",
              "job_per_link" : "job_per_link",
              "job_per_template" : "job_per_template",
              "landlord" : "landlord",
              "property" : "property"
            }
          }
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
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true, "body:summary" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "body:summary" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "body:summary" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "body:summary" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
