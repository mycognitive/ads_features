<?php
/**
 * @file
 * ads_user.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ads_user_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-391bc7d9df1c7c8351435dcbc247dc89'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '391bc7d9df1c7c8351435dcbc247dc89',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ads' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ads',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
