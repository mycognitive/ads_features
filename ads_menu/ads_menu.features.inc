<?php
/**
 * @file
 * ads_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ads_menu_image_default_styles() {
  $styles = array();

  // Exported image style: ads_menu_category_thumbnail.
  $styles['ads_menu_category_thumbnail'] = array(
    'label' => 'ads_menu_category_thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 32,
          'height' => 32,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
