<?php
/**
 * @file
 * fuur_sponsor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fuur_sponsor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fuur_sponsor_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Füür sponsor list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'fuur-sponsor-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['fuur_sponsor_website']['id'] = 'fuur_sponsor_website';
  $handler->display->display_options['fields']['fuur_sponsor_website']['table'] = 'field_data_fuur_sponsor_website';
  $handler->display->display_options['fields']['fuur_sponsor_website']['field'] = 'fuur_sponsor_website';
  $handler->display->display_options['fields']['fuur_sponsor_website']['label'] = '';
  $handler->display->display_options['fields']['fuur_sponsor_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fuur_sponsor_website']['element_type'] = '0';
  $handler->display->display_options['fields']['fuur_sponsor_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_sponsor_website']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_sponsor_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fuur_sponsor_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['fuur_sponsor_website']['type'] = 'link_absolute';
  $handler->display->display_options['fields']['fuur_sponsor_website']['field_api_classes'] = TRUE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['fuur_sponsor_logo']['id'] = 'fuur_sponsor_logo';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['table'] = 'field_data_fuur_sponsor_logo';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['field'] = 'fuur_sponsor_logo';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['alter']['path'] = '[fuur_sponsor_website]';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['alter']['link_class'] = 'fuur-sponsor-link';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fuur_sponsor_logo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['fuur_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['fuur_sponsor_logo']['settings'] = array(
    'image_style' => 'fuur_sponsor_logo',
    'image_link' => '',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fuur_sponsor' => 'fuur_sponsor',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['fuur_sponsor_list'] = array(
    t('Master'),
    t('Sponsoren'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[title]'),
    t('Content pane'),
    t('View panes'),
  );
  $export['fuur_sponsor_list'] = $view;

  return $export;
}
