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
  $view->name = 'fuur_crew_public_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Füür crew public profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'fuur-crew-profiles fuur-crew-profiles-portraits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'rules';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'fuur-crew-public-profile-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Field collection item: Rank (fuur_crew_rank) */
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['id'] = 'fuur_crew_rank_tid';
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['table'] = 'field_data_fuur_crew_rank';
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['field'] = 'fuur_crew_rank_tid';
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['label'] = 'Crew rank';
  /* Relationship: Field collection item: Organisation (fuur_crew_organisation) */
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['id'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['table'] = 'field_data_fuur_crew_organisation';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['field'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['label'] = 'Crew organisation';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['required'] = TRUE;
  /* Field: Field collection item: Portrait */
  $handler->display->display_options['fields']['fuur_crew_portrait']['id'] = 'fuur_crew_portrait';
  $handler->display->display_options['fields']['fuur_crew_portrait']['table'] = 'field_data_fuur_crew_portrait';
  $handler->display->display_options['fields']['fuur_crew_portrait']['field'] = 'fuur_crew_portrait';
  $handler->display->display_options['fields']['fuur_crew_portrait']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_portrait']['element_type'] = 'div';
  $handler->display->display_options['fields']['fuur_crew_portrait']['element_class'] = 'portrait';
  $handler->display->display_options['fields']['fuur_crew_portrait']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_portrait']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_portrait']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_portrait']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['fuur_crew_portrait']['settings'] = array(
    'image_style' => 'fuur_crew_portrait',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Abbreviation */
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['id'] = 'fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['table'] = 'field_data_fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['field'] = 'fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['relationship'] = 'fuur_crew_rank_tid';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_class'] = 'rank';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Last name */
  $handler->display->display_options['fields']['fuur_crew_last_name']['id'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['table'] = 'field_data_fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['field'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_class'] = 'last-name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_default_classes'] = FALSE;
  /* Field: Field collection item: First name */
  $handler->display->display_options['fields']['fuur_crew_first_name']['id'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['table'] = 'field_data_fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['field'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_class'] = 'last-name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['fuur_crew_title']['id'] = 'fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['table'] = 'field_data_fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['field'] = 'fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['fuur_crew_title']['element_class'] = 'title';
  $handler->display->display_options['fields']['fuur_crew_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_title']['element_default_classes'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'fuur_crew_rank_tid';
  /* Sort criterion: Field collection item: Last name (fuur_crew_last_name) */
  $handler->display->display_options['sorts']['fuur_crew_last_name_value']['id'] = 'fuur_crew_last_name_value';
  $handler->display->display_options['sorts']['fuur_crew_last_name_value']['table'] = 'field_data_fuur_crew_last_name';
  $handler->display->display_options['sorts']['fuur_crew_last_name_value']['field'] = 'fuur_crew_last_name_value';
  /* Sort criterion: Field collection item: First name (fuur_crew_first_name) */
  $handler->display->display_options['sorts']['fuur_crew_first_name_value']['id'] = 'fuur_crew_first_name_value';
  $handler->display->display_options['sorts']['fuur_crew_first_name_value']['table'] = 'field_data_fuur_crew_first_name';
  $handler->display->display_options['sorts']['fuur_crew_first_name_value']['field'] = 'fuur_crew_first_name_value';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = '%1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'fuur_crew_public_profile' => 'fuur_crew_public_profile',
  );

  /* Display: Staff portraits */
  $handler = $view->new_display('panel_pane', 'Staff portraits', 'staff_portraits_pane');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organisation term ID',
    ),
  );

  /* Display: Staff name list */
  $handler = $view->new_display('panel_pane', 'Staff name list', 'staff_name_pane');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'fuur-crew-profiles fuur-crew-profiles-names';
  $handler->display->display_options['display_description'] = 'Without pictures.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'fuur-crew-name-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Abbreviation */
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['id'] = 'fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['table'] = 'field_data_fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['field'] = 'fuur_crew_rank_abbreviation';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['relationship'] = 'fuur_crew_rank_tid';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_class'] = 'rank';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_rank_abbreviation']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Last name */
  $handler->display->display_options['fields']['fuur_crew_last_name']['id'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['table'] = 'field_data_fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['field'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_class'] = 'last-name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_default_classes'] = FALSE;
  /* Field: Field collection item: First name */
  $handler->display->display_options['fields']['fuur_crew_first_name']['id'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['table'] = 'field_data_fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['field'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_class'] = 'last-name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['fuur_crew_title']['id'] = 'fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['table'] = 'field_data_fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['field'] = 'fuur_crew_title';
  $handler->display->display_options['fields']['fuur_crew_title']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_title']['element_class'] = 'title';
  $handler->display->display_options['fields']['fuur_crew_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organisation term ID',
    ),
  );
  $translatables['fuur_crew_public_profiles'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Crew rank'),
    t('Crew organisation'),
    t('All'),
    t('%1'),
    t('Staff portraits'),
    t('View panes'),
    t('Staff name list'),
    t('Without pictures.'),
  );
  $export['fuur_crew_public_profiles'] = $view;

  return $export;
}
