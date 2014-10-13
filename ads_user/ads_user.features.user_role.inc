<?php
/**
 * @file
 * ads_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ads_user_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 7,
  );

  return $roles;
}
