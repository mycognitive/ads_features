<?php
/**
 * @file
 * ads_advert.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_advert_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function ads_advert_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ads_advert_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favourites".
  $flags['favourite'] = array(
    'entity_type' => 'node',
    'title' => 'Favourites',
    'global' => 0,
    'types' => array(
      0 => 'advert',
    ),
    'errors' => array(),
    'flag_short' => 'Save',
    'flag_long' => '',
    'flag_message' => 'Advert saved. Go to your profile to see saved adverts.',
    'unflag_short' => 'Undo save',
    'unflag_long' => '',
    'unflag_message' => 'Advert removed from the saved list.',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'i18n' => 0,
    'module' => 'ads_advert',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function ads_advert_image_default_styles() {
  $styles = array();

  // Exported image style: ads_advert_preview.
  $styles['ads_advert_preview'] = array(
    'name' => 'ads_advert_preview',
    'label' => 'ads_advert_preview',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
