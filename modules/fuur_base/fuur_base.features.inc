<?php
/**
 * @file
 * fuur_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fuur_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function fuur_base_image_default_styles() {
  $styles = array();

  // Exported image style: fuur_fullwidth.
  $styles['fuur_fullwidth'] = array(
    'name' => 'fuur_fullwidth',
    'label' => 'Füür Full-width',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fuur_base_node_info() {
  $items = array(
    'fuur_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News story for the fire department.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'fuur_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Standard page for hierarchial content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
