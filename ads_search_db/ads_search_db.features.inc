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
      "partial_matches" : 0,
      "indexes" : { "ads_adverts" : {
          "title" : {
            "table" : "search_api_db_ads_adverts_title",
            "type" : "text",
            "boost" : "0.1"
          },
          "status" : {
            "table" : "search_api_db_ads_adverts_status",
            "type" : "integer",
            "boost" : "0.1"
          },
          "search_api_language" : {
            "table" : "search_api_db_ads_adverts_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "nid" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_ad_category" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "field_ad_category",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_ad_location" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "field_ad_location",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_ad_category_node_ref" : {
            "table" : "search_api_db_ads_adverts_field_ad_category_node_ref",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_level_1_field" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "field_level_1_field",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_level_2_field" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "field_level_2_field",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_ad_category:tid" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "field_ad_category_tid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_ad_category:name" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "field_ad_category_name",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_ad_category:parent" : {
            "table" : "search_api_db_ads_adverts_field_ad_category_parent",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_ad_category:parents_all" : {
            "table" : "search_api_db_ads_adverts_field_ad_category_parents_all",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_ad_location:name" : {
            "table" : "search_api_db_ads_adverts",
            "column" : "field_ad_location_name",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_ad_category_node_ref:nid" : {
            "table" : "search_api_db_ads_adverts_field_ad_category_node_ref_nid",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_ads_adverts_title",
            "type" : "text",
            "boost" : "0.1"
          },
          "body:summary" : {
            "table" : "search_api_db_ads_adverts_title",
            "type" : "text",
            "boost" : "0.1"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
