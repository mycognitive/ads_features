<?php
/**
 * @file
 * ads_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ads_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
