<?php
/**
 * @file
 * ads_menu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ads_menu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'anon_menu';
  $context->description = 'Display common menus for anonymous user.';
  $context->tag = 'ADS Menu';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-anonymous-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-anonymous-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ADS Menu');
  t('Display common menus for anonymous user.');
  $export['anon_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_menu';
  $context->description = 'Display common menus for all the users.';
  $context->tag = 'ADS';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ADS');
  t('Display common menus for all the users.');
  $export['site_menu'] = $context;

  return $export;
}
