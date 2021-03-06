<?php
/**
 * @file
 * ads_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ads_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ads_facets';
  $context->description = 'Display faceted search filters.';
  $context->tag = 'ADS Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'taxonomy/term/*' => 'taxonomy/term/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-yVUnk1RU7PXcmaFrReY5Wb5x9TAvG6hd' => array(
          'module' => 'facetapi',
          'delta' => 'yVUnk1RU7PXcmaFrReY5Wb5x9TAvG6hd',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-JqO77EHSQZejqY86mMo1IC2r3Sk4Z8pS' => array(
          'module' => 'facetapi',
          'delta' => 'JqO77EHSQZejqY86mMo1IC2r3Sk4Z8pS',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ADS Search');
  t('Display faceted search filters.');
  $export['ads_facets'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ads_search_adverts_input';
  $context->description = 'Displays keywords\' input box used for searching for adverts.';
  $context->tag = 'ADS Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'taxonomy/term/*' => 'taxonomy/term/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-999560716203e6ae9d8653d08ef9eb77' => array(
          'module' => 'views',
          'delta' => '999560716203e6ae9d8653d08ef9eb77',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ADS Search');
  t('Displays keywords\' input box used for searching for adverts.');
  $export['ads_search_adverts_input'] = $context;

  return $export;
}
