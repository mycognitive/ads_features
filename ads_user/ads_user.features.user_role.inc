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
    'weight' => 6,
  );

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 10,
  );

  // Exported role: Organizer.
  $roles['Organizer'] = array(
    'name' => 'Organizer',
    'weight' => 9,
  );

  // Exported role: Reviewer.
  $roles['Reviewer'] = array(
    'name' => 'Reviewer',
    'weight' => 8,
  );

  // Exported role: Tag Editor.
  $roles['Tag Editor'] = array(
    'name' => 'Tag Editor',
    'weight' => 5,
  );

  // Exported role: Taxonomist.
  $roles['Taxonomist'] = array(
    'name' => 'Taxonomist',
    'weight' => 7,
  );

  return $roles;
}
