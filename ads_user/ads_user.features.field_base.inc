<?php
/**
 * @file
 * ads_user.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ads_user_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_profile_address'
  $field_bases['field_user_profile_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_profile_address',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  return $field_bases;
}
