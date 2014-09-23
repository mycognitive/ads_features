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
 * Implements hook_image_default_styles().
 */
function ads_user_image_default_styles() {
  $styles = array();

  // Exported image style: ads_avatar.
  $styles['ads_avatar'] = array(
    'name' => 'ads_avatar',
    'label' => 'ads_avatar',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
