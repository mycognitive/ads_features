<?php
/**
 * @file
 * ads_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ads_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'ntm-1' => array(
      'delta' => '1',
      'module' => 'ntm',
    ),
  );

  // bartik
  $theme = array();

  $theme['ntm-1'] = array(
    'module' => 'ntm',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Categories',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['ntm-1'] = array(
    'module' => 'ntm',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Categories',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
