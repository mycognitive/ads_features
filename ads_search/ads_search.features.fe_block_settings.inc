<?php
/**
 * @file
 * ads_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ads_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-892bf6e56abdd4696e4aeadf07055edb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '892bf6e56abdd4696e4aeadf07055edb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'adverts/*',
    'roles' => array(),
    'themes' => array(
      'ads_base' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ads_base',
        'weight' => -24,
      ),
      'ads_tm_inter_comf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ads_tm_inter_comf',
        'weight' => 0,
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
