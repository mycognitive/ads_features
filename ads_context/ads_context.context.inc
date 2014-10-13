<?php
/**
 * @file
 * ads_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ads_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'anon_header';
  $context->description = 'Display header for anonymous user.';
  $context->tag = 'ADS';
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
  t('ADS');
  t('Display header for anonymous user.');
  $export['anon_header'] = $context;

  return $export;
}
