<?php
/**
 * @file
 * ads_content_types.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ads_content_types_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-fivestar-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'fivestar-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ads_base' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ads_base',
        'weight' => 12,
      ),
      'ads_tm_inter_comf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ads_tm_inter_comf',
        'weight' => 12,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
