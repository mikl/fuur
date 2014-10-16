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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'fuur-crew-public-profile-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Field: Rank (fuur_crew_rank) */
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['id'] = 'fuur_crew_rank_tid';
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['table'] = 'field_data_fuur_crew_rank';
  $handler->display->display_options['relationships']['fuur_crew_rank_tid']['field'] = 'fuur_crew_rank_tid';
  /* Relationship: Field: Organisation (fuur_crew_organisation) */
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['id'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['table'] = 'field_data_fuur_crew_organisation';
  $handler->display->display_options['relationships']['fuur_crew_organisation_tid']['field'] = 'fuur_crew_organisation_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Portrait */
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
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['fuur_crew_last_name']['id'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['table'] = 'field_data_fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['field'] = 'fuur_crew_last_name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_class'] = 'last-name';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_last_name']['element_default_classes'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['fuur_crew_first_name']['id'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['table'] = 'field_data_fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['field'] = 'fuur_crew_first_name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['label'] = '';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_class'] = 'last-name';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_crew_first_name']['element_default_classes'] = FALSE;
  /* Field: Field: Title */
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
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'fuur_crew_organisation_tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'fuur_crew_rank_tid';
  /* Filter criterion: Field: Organisation (fuur_crew_organisation) */
  $handler->display->display_options['filters']['fuur_crew_organisation_tid']['id'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['filters']['fuur_crew_organisation_tid']['table'] = 'field_data_fuur_crew_organisation';
  $handler->display->display_options['filters']['fuur_crew_organisation_tid']['field'] = 'fuur_crew_organisation_tid';
  $handler->display->display_options['filters']['fuur_crew_organisation_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['fuur_crew_organisation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['fuur_crew_organisation_tid']['vocabulary'] = 'fuur_crew_organisation';
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'fuur_crew_public_profile' => 'fuur_crew_public_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'crew';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Crew';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['fuur_crew_public_profiles'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from fuur_crew_rank'),
    t('term from fuur_crew_organisation'),
    t('Page'),
  );
  $export['fuur_crew_public_profiles'] = $view;

  return $export;
}
