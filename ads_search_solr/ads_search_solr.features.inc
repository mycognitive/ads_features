<?php
/**
 * @file
 * ads_search_solr.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function ads_search_solr_default_search_api_server() {
  $items = array();
  $items['ads_search_server'] = entity_import('search_api_server', '{
    "name" : "Ads Search Server",
    "machine_name" : "ads_search_server",
    "description" : "Uses a Solr to index data. It has great performance, is suitable even for use on large commercial websites and supports facets and multi-index searches.",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids_form" : [],
      "clean_ids" : false,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "admin",
      "http_pass" : "admin",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "POST",
      "autocorrect_spell" : 1,
      "autocorrect_suggest_words" : 1
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
