<?php
/**
 * @file
 * fuur_incident.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fuur_incident_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fuur_incident content'.
  $permissions['create fuur_incident content'] = array(
    'name' => 'create fuur_incident content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fuur_incident content'.
  $permissions['delete any fuur_incident content'] = array(
    'name' => 'delete any fuur_incident content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fuur_incident content'.
  $permissions['delete own fuur_incident content'] = array(
    'name' => 'delete own fuur_incident content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fuur_incident content'.
  $permissions['edit any fuur_incident content'] = array(
    'name' => 'edit any fuur_incident content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fuur_incident content'.
  $permissions['edit own fuur_incident content'] = array(
    'name' => 'edit own fuur_incident content',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
