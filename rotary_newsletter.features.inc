<?php
/**
 * @file
 * rotary_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rotary_newsletter_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rotary_newsletter_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rotary_newsletter_node_info() {
  $items = array(
    'simplenews' => array(
      'name' => t('Weekly Newsletter'),
      'base' => 'node_content',
      'description' => t('Weekly bulletin: upcoming speakers and events, plus Rotary news and events in our community, district and around the world. If you have an interesting Rotary tidbit, send it to newsletter@southvalleyrotary.org'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
