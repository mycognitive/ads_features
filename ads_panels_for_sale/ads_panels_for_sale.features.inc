<?php
/**
 * @file
 * ads_panels_for_sale.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_panels_for_sale_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
