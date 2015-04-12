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

  // Exported menu: menu-ads-user-menu.
  $menus['menu-ads-user-menu'] = array(
    'menu_name' => 'menu-ads-user-menu',
    'title' => 'ADS User Menu',
    'description' => '',
  );
  // Exported menu: menu-anonymous-menu.
  $menus['menu-anonymous-menu'] = array(
    'menu_name' => 'menu-anonymous-menu',
    'title' => 'Anonymous menu',
    'description' => 'Menu for anonymous users.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Menu located at the bottom of the page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ADS User Menu');
  t('Anonymous menu');
  t('Footer menu');
  t('Menu for anonymous users.');
  t('Menu located at the bottom of the page.');


  return $menus;
}
