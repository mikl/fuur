<?php
/**
 * @file
 * fuur_sponsor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fuur_sponsor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fuur_sponsor content'.
  $permissions['create fuur_sponsor content'] = array(
    'name' => 'create fuur_sponsor content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fuur_sponsor content'.
  $permissions['delete any fuur_sponsor content'] = array(
    'name' => 'delete any fuur_sponsor content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fuur_sponsor content'.
  $permissions['delete own fuur_sponsor content'] = array(
    'name' => 'delete own fuur_sponsor content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fuur_sponsor content'.
  $permissions['edit any fuur_sponsor content'] = array(
    'name' => 'edit any fuur_sponsor content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fuur_sponsor content'.
  $permissions['edit own fuur_sponsor content'] = array(
    'name' => 'edit own fuur_sponsor content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
