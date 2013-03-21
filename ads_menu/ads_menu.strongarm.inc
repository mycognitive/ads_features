<?php
/**
 * @file
 * ads_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ads_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ntm_menu_decor_and_style_1';
  $strongarm->value = 'default:left';
  $export['ntm_menu_decor_and_style_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ntm_menu_depth_1';
  $strongarm->value = '10';
  $export['ntm_menu_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ntm_menu_description_1';
  $strongarm->value = '';
  $export['ntm_menu_description_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ntm_menu_source_1';
  $strongarm->value = 't:2:0';
  $export['ntm_menu_source_1'] = $strongarm;

  return $export;
}
