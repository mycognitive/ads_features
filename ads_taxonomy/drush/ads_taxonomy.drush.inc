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
      'drush ads-taxonomy-import'                      => dt('Imports taxonomies from all the modules that defines hook_ads_taxonomy_files() function.'),
      'drush ads-taxonomy-import path [taxonomy_name]' => dt("Imports taxonomy from the specified file path. If taxonomy_name wasn't specified, file name will be used as taxonomy name."),
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
 * Imports taxonomies from all the modules that defines
 * hook_ads_taxonomy_files() function or from the specified file path.
 * If taxonomy_name wasn't specified, file name will be used as taxonomy name.
 *
 * @param string $path
 *   Optional. Path to the taxonomy file.
 * @param string $taxonomy_name
 *   Optional. Name of the target taxonomy.
 */
function ads_taxonomy_drush_import($path = NULL, $taxonomy_name = NULL) {
  if ($path === NULL) {
    // No path specified, importing taxonomies from all the modules.
    ads_taxonomy_import();
  }
  else {
    // Importing a single taxonomy file.
    ads_taxonomy_import_single($path, $taxonomy_name);
  }
}
