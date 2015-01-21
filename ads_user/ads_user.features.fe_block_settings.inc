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

  $export['follow-site'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site',
    'module' => 'follow',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ads_base' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ads_base',
        'weight' => -23,
      ),
      'ads_tm_inter_comf' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ads_tm_inter_comf',
        'weight' => -23,
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-391bc7d9df1c7c8351435dcbc247dc89'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '391bc7d9df1c7c8351435dcbc247dc89',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ads_base' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ads_base',
        'weight' => 3,
      ),
      'ads_tm_inter_comf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ads_tm_inter_comf',
        'weight' => 3,
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
