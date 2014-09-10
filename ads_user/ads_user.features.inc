<?php
/**
 * @file
 * ads_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function ads_user_default_profile2_type() {
  $items = array();
  $items['user_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "user_profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
