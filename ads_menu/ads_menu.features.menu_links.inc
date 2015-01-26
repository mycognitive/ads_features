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

  // Exported menu link: menu-ads-user-menu_add-advert:advert/add
  $menu_links['menu-ads-user-menu_add-advert:advert/add'] = array(
    'menu_name' => 'menu-ads-user-menu',
    'link_path' => 'advert/add',
    'router_path' => 'advert/add',
    'link_title' => 'Add Advert',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ads-user-menu_add-advert:advert/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-ads-user-menu_login:user/login
  $menu_links['menu-ads-user-menu_login:user/login'] = array(
    'menu_name' => 'menu-ads-user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ads-user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-ads-user-menu_logout:user/logout
  $menu_links['menu-ads-user-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-ads-user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ads-user-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
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
    'hidden' => 1,
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
  // Exported menu link: menu-footer-menu_contact-admin:contact
  $menu_links['menu-footer-menu_contact-admin:contact'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Admin',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Web Admin for help.',
      ),
      'identifier' => 'menu-footer-menu_contact-admin:contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_cookies-policy:http://www.whatarecookies.com/
  $menu_links['menu-footer-menu_cookies-policy:http://www.whatarecookies.com/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://www.whatarecookies.com/',
    'router_path' => '',
    'link_title' => 'Cookies Policy',
    'options' => array(
      'attributes' => array(
        'title' => 'What Are Cookies?',
      ),
      'identifier' => 'menu-footer-menu_cookies-policy:http://www.whatarecookies.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_give-feedback:https://drupal-ads.uservoice.com/
  $menu_links['menu-footer-menu_give-feedback:https://drupal-ads.uservoice.com/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://drupal-ads.uservoice.com/',
    'router_path' => '',
    'link_title' => 'Give feedback',
    'options' => array(
      'attributes' => array(
        'title' => 'Give feedback about the site.',
      ),
      'identifier' => 'menu-footer-menu_give-feedback:https://drupal-ads.uservoice.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_site-map:sitemap
  $menu_links['menu-footer-menu_site-map:sitemap'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a site map with RSS feeds.',
      ),
      'identifier' => 'menu-footer-menu_site-map:sitemap',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Advert');
  t('Contact Admin');
  t('Cookies Policy');
  t('Give feedback');
  t('Login');
  t('Logout');
  t('Post an Ad');
  t('Register');
  t('Sign In');
  t('Site map');


  return $menu_links;
}
