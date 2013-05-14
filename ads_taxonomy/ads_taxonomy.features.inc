<?php
/**
 * @file
 * ads_taxonomy.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ads_taxonomy_image_default_styles() {
  $styles = array();

  // Exported image style: ads_menu_category_thumbnail.
  $styles['ads_menu_category_thumbnail'] = array(
    'name' => 'ads_menu_category_thumbnail',
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
          'width' => 32,
          'height' => 24,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
