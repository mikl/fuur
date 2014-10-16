<?php
/**
 * @file
 * fuur_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fuur_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer media wysiwyg view mode'.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'media_wysiwyg_view_mode',
  );

  // Exported permission: 'use text format fuur_wysiwyg'.
  $permissions['use text format fuur_wysiwyg'] = array(
    'name' => 'use text format fuur_wysiwyg',
    'roles' => array(
      'admin' => 'admin',
      'developer' => 'developer',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
