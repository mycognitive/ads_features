<?php
/**
 * @file
 * ads_locations.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ads_locations_views_api() {
  return array(
    "api" => "3.0",
    'template path' => drupal_get_path('module', 'ads_locations') . '/theme',
  );
}
