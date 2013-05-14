<?php
/**
 * @file
 * Drush commands for ads_taxonomy module.
 */

/**
 * Implements hook_drush_command().
 */
function ads_taxonomy_drush_command() {
  $items = array();
  $items['ads-taxonomy-import'] = array(
    'callback'  => 'ads_taxonomy_drush_import',
    'arguments' => array(
      'path' => array(
        'description' => dt('Optional. Path to the taxonomy file.'),
        'required'    => FALSE,
      ),
      'taxonomy_name' => array(
        'description' => dt('Optional. Name of the target taxonomy.'),
        'required'    => FALSE,
      ),
    ),
    'description' => dt('Imports taxonomy content.'),
    'examples' => array(
      'drush ads-taxonomy-import'             => dt('Imports taxonomies from all the modules that defines hook_ads_taxonomy_files() function.'),
      'drush ads-taxonomy-import module_name' => dt("Imports taxonomies from the specified module. Module must define hook_ads_taxonomy_files() function."),
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function ads_taxonomy_drush_help($section) {
  switch ($section) {
    case 'ads-taxonomy-import':
      return dt("Taxonomy import.");
  }
}

/**
 * Drush command (ads-taxonomy-import).
 *
 * Imports taxonomies from the specified module.
 *
 * @param string $module_name
 *   Optional. Name of the module to import taxonomies from.
 */
function ads_taxonomy_drush_import($module_name = NULL) {
  ads_taxonomy_import($module_name);
}
