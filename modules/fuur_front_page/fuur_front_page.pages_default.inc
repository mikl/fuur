<?php
/**
 * @file
 * fuur_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fuur_front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'fuur_front_page';
  $page->task = 'page';
  $page->admin_title = 'Füür front page';
  $page->admin_description = 'Front page layout for Füür.';
  $page->path = 'fuur_front_page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_fuur_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'fuur_front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'fuur_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f799c65e-912c-40f0-ab6b-edd75f6049f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0587d28b-3143-4909-9f27-c7964f0d16ca';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'fuur_front_page_teasers-panel_pane_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0587d28b-3143-4909-9f27-c7964f0d16ca';
    $display->content['new-0587d28b-3143-4909-9f27-c7964f0d16ca'] = $pane;
    $display->panels['main'][0] = 'new-0587d28b-3143-4909-9f27-c7964f0d16ca';
    $pane = new stdClass();
    $pane->pid = 'new-8d509087-8587-41af-b9b3-a0a7dac63819';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'system-powered-by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8d509087-8587-41af-b9b3-a0a7dac63819';
    $display->content['new-8d509087-8587-41af-b9b3-a0a7dac63819'] = $pane;
    $display->panels['sidebar'][0] = 'new-8d509087-8587-41af-b9b3-a0a7dac63819';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['fuur_front_page'] = $page;

  return $pages;

}
