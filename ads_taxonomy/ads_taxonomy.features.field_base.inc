<?php
/**
 * @file
 * ads_taxonomy.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ads_taxonomy_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_cat_content_type'
  $field_bases['field_cat_content_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cat_content_type',
    'foreign keys' => array(
      'value' => array(
        'columns' => array(
          'value' => 'name',
        ),
        'table' => 'value',
      ),
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'bundle_name_reference',
    'settings' => array(
      'allowed_values_function' => 'bundle_name_reference_allowed_values',
      'entity_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'bundle_name_reference',
  );

  return $field_bases;
}
