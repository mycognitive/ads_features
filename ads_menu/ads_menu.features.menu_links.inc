<?php
/**
 * @file
 * ads_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ads_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-anonymous-menu_post-an-ad:advert/add
  $menu_links['menu-anonymous-menu_post-an-ad:advert/add'] = array(
    'menu_name' => 'menu-anonymous-menu',
    'link_path' => 'advert/add',
    'router_path' => 'advert/add',
    'link_title' => 'Post an Ad',
    'options' => array(
      'attributes' => array(
        'title' => 'Add anonymous advert posting.',
      ),
      'identifier' => 'menu-anonymous-menu_post-an-ad:advert/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-anonymous-menu_register:user/register
  $menu_links['menu-anonymous-menu_register:user/register'] = array(
    'menu_name' => 'menu-anonymous-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => 'Register new account.',
      ),
      'identifier' => 'menu-anonymous-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-anonymous-menu_sign-in:user
  $menu_links['menu-anonymous-menu_sign-in:user'] = array(
    'menu_name' => 'menu-anonymous-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Sign In',
    'options' => array(
      'attributes' => array(
        'title' => 'Sign in with your existing account.',
      ),
      'identifier' => 'menu-anonymous-menu_sign-in:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Post an Ad');
  t('Register');
  t('Sign In');


  return $menu_links;
}
