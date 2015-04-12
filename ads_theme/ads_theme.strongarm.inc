<?php
/**
 * @file
 * ads_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ads_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prepro';
  $strongarm->value = array(
    'filetypes' => array(
      'sass' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/cache',
        'cache_path' => 'public://prepro',
      ),
      'scss' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/cache',
        'cache_path' => 'public://prepro',
      ),
    ),
    'additional' => array(
      'sassy' => array(
        'watchdog' => 0,
        'debug' => 0,
        'errors' => 'watchdog',
        'style' => 'nested',
      ),
    ),
    'show_warnings' => 1,
  );
  $export['prepro'] = $strongarm;

  return $export;
}
