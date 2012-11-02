<?php
/**
 * @file
 * rotary_newsletter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rotary_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer newsletters.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      0 => 'Newsletter',
      1 => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer simplenews settings.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      0 => 'Newsletter',
      1 => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer simplenews subscriptions.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      0 => 'Newsletter',
      1 => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: send newsletter.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      0 => 'Newsletter',
      1 => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: subscribe to newsletters.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  return $permissions;
}
