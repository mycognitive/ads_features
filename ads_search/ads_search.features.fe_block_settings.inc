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

  $export['facetapi-MkAg0o0zD2xtOTg6OF3FtfffXC6lCe0p'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'MkAg0o0zD2xtOTg6OF3FtfffXC6lCe0p',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
    'title' => 'Price',
    'visibility' => 0,
  );

  $export['facetapi-iAso1tFuLKWJpoxMT485z17Hkjtn3kKG'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'iAso1tFuLKWJpoxMT485z17Hkjtn3kKG',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search/results
search/results/*',
    'roles' => array(),
    'themes' => array(
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
    'title' => 'Category',
    'visibility' => 1,
  );

  $export['views-988bf951e4ed835a8625c382c2cf668e'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '988bf951e4ed835a8625c382c2cf668e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'header',
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
    'title' => 'Search',
    'visibility' => 0,
  );

  return $export;
}