<?php
/**
 * @file
 * cart_type_person.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cart_type_person_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cart_person content'.
  $permissions['create cart_person content'] = array(
    'name' => 'create cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cart_person content'.
  $permissions['delete any cart_person content'] = array(
    'name' => 'delete any cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cart_person content'.
  $permissions['delete own cart_person content'] = array(
    'name' => 'delete own cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cart_person content'.
  $permissions['edit any cart_person content'] = array(
    'name' => 'edit any cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cart_person content'.
  $permissions['edit own cart_person content'] = array(
    'name' => 'edit own cart_person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
