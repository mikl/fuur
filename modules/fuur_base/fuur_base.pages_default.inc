<?php
/**
 * @file
 * fuur_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fuur_base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__fuur_default';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Füür default page layout',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'fuur-default-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'fuur_site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'closure' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '494faa3c-a7c4-46df-9efe-eb43eb0d7ad9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69f5b37b-6fa3-4d33-a953-4e753579ed44';
    $pane->panel = 'second';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69f5b37b-6fa3-4d33-a953-4e753579ed44';
    $display->content['new-69f5b37b-6fa3-4d33-a953-4e753579ed44'] = $pane;
    $display->panels['second'][0] = 'new-69f5b37b-6fa3-4d33-a953-4e753579ed44';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-69f5b37b-6fa3-4d33-a953-4e753579ed44';
  $handler->conf['display'] = $display;
  $export['site_template__fuur_default'] = $handler;

  return $export;
}
