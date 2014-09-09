<?php
/**
 * @file
 * ads_advert.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ads_advert_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rate',
  );

  return $permissions;
}
