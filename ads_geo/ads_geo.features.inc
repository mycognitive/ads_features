<?php
/**
 * @file
 * ads_geo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_geo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
