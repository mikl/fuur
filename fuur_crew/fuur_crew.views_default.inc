<?php
/**
 * @file
 * fuur_crew.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fuur_crew_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fuur_crew_public_list';
  $view->description = 'Provides a list of crew members for the public part of the website.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Füür crew public list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Organisation (fuur_crew_organisation) */
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['id'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['table'] = 'field_data_fuur_crew_organisation';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['field'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['required'] = TRUE;
  /* Relationship: User: Rank (fuur_crew_rank) */
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['id'] = 'fuur_crew_rank_tid';
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['table'] = 'field_data_fuur_crew_rank';
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['field'] = 'fuur_crew_rank_tid';
  /* Field: Taxonomy term: Abbreviation */
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['id'] = 'fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['table'] = 'field_data_fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['field'] = 'fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['relationship'] = 'fuur_crew_rank_tid';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['field_api_classes'] = TRUE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['fuur_crew_last_name']['id'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['table'] = 'field_data_fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['field'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_last_name']['field_api_classes'] = TRUE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['fuur_crew_first_name']['id'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['table'] = 'field_data_fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['field'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_first_name']['field_api_classes'] = TRUE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['fuur_crew_title']['id'] = 'fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['table'] = 'field_data_fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['field'] = 'fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_title']['element_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_title']['field_api_classes'] = TRUE;
  /* Sort criterion: User: Organisation (fuur_crew_organisation:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_fuur_crew_organisation';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Sort criterion: User: Last name (fuur_crew_last_name) */
  $handler->display->display_options['sorts']['fuur_crew_last_name_value']['id'] = 'fuur_crew_last_name_value';
  $handler->display->display_options['sorts']['fuur_crew_last_name_value']['table'] = 'field_data_fuur_crew_last_name';
  $handler->display->display_options['sorts']['fuur_crew_last_name_value']['field'] = 'fuur_crew_last_name_value';
  /* Sort criterion: User: First name (fuur_crew_first_name) */
  $handler->display->display_options['sorts']['fuur_crew_first_name_value']['id'] = 'fuur_crew_first_name_value';
  $handler->display->display_options['sorts']['fuur_crew_first_name_value']['table'] = 'field_data_fuur_crew_first_name';
  $handler->display->display_options['sorts']['fuur_crew_first_name_value']['field'] = 'fuur_crew_first_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['fuur_crew_public_list'] = $view;

  return $export;
}
