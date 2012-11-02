<?php
/**
 * @file
 * rotary_newsletter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rotary_newsletter_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'birthdays_for_newsletter';
  $view->description = 'Member birthday list, sorted by month/day and excluding year';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Birthdays for Newsletter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Birthdays';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_member_name' => 'field_member_name',
    'field_birthdate' => 'field_birthdate',
    'php' => 'php',
    'php_1' => 'php_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_birthdate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 1;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'rotary_information' => 'rotary_information',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_birthdate']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Birthday';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print substr($data->field_field_birthdate[0][\'raw\'][\'value\'],5,5);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: User: Birthdate (field_birthdate) */
  $handler->display->display_options['sorts']['field_birthdate_value']['id'] = 'field_birthdate_value';
  $handler->display->display_options['sorts']['field_birthdate_value']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['sorts']['field_birthdate_value']['field'] = 'field_birthdate_value';
  /* Contextual filter: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'global $user;
$node = user_load($user->uid);
if (isset($node->field_chapter[\'und\'][0][\'target_id\'])) {  // logged in user
 return $node->field_chapter[\'und\'][0][\'target_id\'];
} elseif (function_exists(\'attendance_get_config\')) {  // attendance module installed
  $config = attendance_get_config();
  if (isset($config->field_chapter[\'und\'][0][\'target_id\'])) {
    return $config->field_chapter[\'und\'][0][\'target_id\'];
  }
} 
  // get the first Chapter/club record
  $query = new EntityFieldQuery();
  $query->entityCondition(\'entity_type\', \'node\')
            ->entityCondition(\'bundle\', \'chapter\');
  $result = $query->execute();
  if (isset($result[\'node\'])) {
    return current(array_keys($result[\'node\']));
  }
';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_chapter_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Select current month as birthday month */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'Select current month as birthday month';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$mo1 = substr($data->field_data_field_birthdate_field_birthdate_value,5,2);
$mo2 = date(\'m\');
if ($mo1 <> $mo2) {
   return TRUE;
}
return FALSE;
';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'birthdays';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Birthdays';
  $handler->display->display_options['menu']['description'] = 'Birthday List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['birthdays_for_newsletter'] = $view;

  return $export;
}
