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
    $pane->pid = 'new-d2c24167-93dd-49ab-ac05-7c956c91c376';
    $pane->panel = 'content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'd2c24167-93dd-49ab-ac05-7c956c91c376';
    $display->content['new-d2c24167-93dd-49ab-ac05-7c956c91c376'] = $pane;
    $display->panels['content'][0] = 'new-d2c24167-93dd-49ab-ac05-7c956c91c376';
    $pane = new stdClass();
    $pane->pid = 'new-69f5b37b-6fa3-4d33-a953-4e753579ed44';
    $pane->panel = 'content';
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
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '69f5b37b-6fa3-4d33-a953-4e753579ed44';
    $display->content['new-69f5b37b-6fa3-4d33-a953-4e753579ed44'] = $pane;
    $display->panels['content'][1] = 'new-69f5b37b-6fa3-4d33-a953-4e753579ed44';
    $pane = new stdClass();
    $pane->pid = 'new-abf8600f-3a0b-424a-8411-f56da947fcea';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'abf8600f-3a0b-424a-8411-f56da947fcea';
    $display->content['new-abf8600f-3a0b-424a-8411-f56da947fcea'] = $pane;
    $display->panels['content'][2] = 'new-abf8600f-3a0b-424a-8411-f56da947fcea';
    $pane = new stdClass();
    $pane->pid = 'new-37fec951-2f1b-4b0b-a1ad-b2e950089ea4';
    $pane->panel = 'header';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37fec951-2f1b-4b0b-a1ad-b2e950089ea4';
    $display->content['new-37fec951-2f1b-4b0b-a1ad-b2e950089ea4'] = $pane;
    $display->panels['header'][0] = 'new-37fec951-2f1b-4b0b-a1ad-b2e950089ea4';
    $pane = new stdClass();
    $pane->pid = 'new-3046ea5b-9596-4300-bb28-700625351c2e';
    $pane->panel = 'header';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => 'Main menu, level 1',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3046ea5b-9596-4300-bb28-700625351c2e';
    $display->content['new-3046ea5b-9596-4300-bb28-700625351c2e'] = $pane;
    $display->panels['header'][1] = 'new-3046ea5b-9596-4300-bb28-700625351c2e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-69f5b37b-6fa3-4d33-a953-4e753579ed44';
  $handler->conf['display'] = $display;
  $export['site_template__fuur_default'] = $handler;

  return $export;
}
