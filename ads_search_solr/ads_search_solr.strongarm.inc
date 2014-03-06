<?php
/**
 * @file
 * ads_search_solr.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ads_search_solr_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_boost_expr_date';
  $strongarm->value = '';
  $export['search_api_solr_extra_boost_expr_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_score_thresholding_threshold_enabled';
  $strongarm->value = 0;
  $export['search_api_solr_extra_score_thresholding_threshold_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_score_thresholding_threshold_value';
  $strongarm->value = '20';
  $export['search_api_solr_extra_score_thresholding_threshold_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_debugging_queries_enabled';
  $strongarm->value = 1;
  $export['search_api_solr_extra_settings_debugging_queries_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_debugging_results_enabled';
  $strongarm->value = 1;
  $export['search_api_solr_extra_settings_debugging_results_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_debugging_results_process_time';
  $strongarm->value = 0;
  $export['search_api_solr_extra_settings_debugging_results_process_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_debugging_result_boosts_enabled';
  $strongarm->value = 0;
  $export['search_api_solr_extra_settings_debugging_result_boosts_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_debugging_result_boosts_expand';
  $strongarm->value = 1;
  $export['search_api_solr_extra_settings_debugging_result_boosts_expand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_debugging_result_full_response_enabled';
  $strongarm->value = 0;
  $export['search_api_solr_extra_settings_debugging_result_full_response_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_debugging_result_spellcheck_enabled';
  $strongarm->value = 0;
  $export['search_api_solr_extra_settings_debugging_result_spellcheck_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_logging_queries_enabled';
  $strongarm->value = 0;
  $export['search_api_solr_extra_settings_logging_queries_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_settings_logging_responses_enabled';
  $strongarm->value = 0;
  $export['search_api_solr_extra_settings_logging_responses_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_solr_cache_results';
  $strongarm->value = 0;
  $export['search_api_solr_extra_solr_cache_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_extra_solr_cache_results_timeout';
  $strongarm->value = '1min 30s';
  $export['search_api_solr_extra_solr_cache_results_timeout'] = $strongarm;

  return $export;
}
