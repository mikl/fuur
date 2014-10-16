<?php
/**
 * @file
 * fuur_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fuur_base_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 2,
  );

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => 3,
  );

  return $roles;
}
