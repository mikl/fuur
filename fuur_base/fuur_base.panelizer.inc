<?php
/**
 * @file
 * fuur_base.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function fuur_base_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'fuur_news_category';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'taxonomy_term:fuur_news_category:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:nameberichte';
  $display->uuid = '7ec5a062-4248-4c6a-ac74-7d093d459e8c';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:fuur_news_category:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fabf8196-e556-401b-a005-e3d995ba8abe';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'fuur_news_list-teaser_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '20',
    'offset' => '0',
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fabf8196-e556-401b-a005-e3d995ba8abe';
  $display->content['new-fabf8196-e556-401b-a005-e3d995ba8abe'] = $pane;
  $display->panels['middle'][0] = 'new-fabf8196-e556-401b-a005-e3d995ba8abe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:fuur_news_category:default:default'] = $panelizer;

  return $export;
}
