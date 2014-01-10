<?php
/**
 * @file
 * ads_search_db.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function ads_search_db_default_search_api_server() {
  $items = array();
  $items['ads_search_server'] = entity_import('search_api_server', '{
    "name" : "Ads Search Server",
    "machine_name" : "ads_search_server",
    "description" : "Uses a normal database to index data (a cheap and simple alternative to backends like Solr).",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "ads_adverts" : {
          "title" : {
            "table" : "search_api_db_ads_adverts_title",
            "type" : "text",
            "boost" : "5.0"
          },
          "status" : {
            "table" : "search_api_db_ads_adverts_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_ads_adverts_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_ads_adverts_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_ads_adverts_body_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_ads_adverts_body_summary",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
