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

  $export['facetapi-GLow6e2NSrErmpH4NJVR8daltTHNsTAb'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'GLow6e2NSrErmpH4NJVR8daltTHNsTAb',
    'module' => 'facetapi',
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
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-892bf6e56abdd4696e4aeadf07055edb'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '892bf6e56abdd4696e4aeadf07055edb',
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
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
