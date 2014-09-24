<?php
/**
 * @file
 * ads_points.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ads_points_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view own userpoints'.
  $permissions['view own userpoints'] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  // Exported permission: 'view userpoints'.
  $permissions['view userpoints'] = array(
    'name' => 'view userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  return $permissions;
}
