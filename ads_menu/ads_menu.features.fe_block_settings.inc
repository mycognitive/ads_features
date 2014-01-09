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

  $export['version'] = '2.0';

  $export['ntm-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'ntm',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ads' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ads',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Categories',
    'visibility' => 0,
  );

  return $export;
}
