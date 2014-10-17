<?php
/**
 * @file
 * ads_date_time.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_date_time_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
