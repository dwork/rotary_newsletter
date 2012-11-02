<?php
/**
 * @file
 * rotary_newsletter.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rotary_newsletter_user_default_roles() {
  $roles = array();

  // Exported role: Newsletter.
  $roles['Newsletter'] = array(
    'name' => 'Newsletter',
    'weight' => '5',
  );

  return $roles;
}
