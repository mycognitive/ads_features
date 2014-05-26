<?php
/**
 * @file
 * ads_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ads_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Menu located at the bottom of the page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Menu located at the bottom of the page.');


  return $menus;
}
