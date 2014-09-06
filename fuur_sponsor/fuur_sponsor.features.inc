<?php
/**
 * @file
 * fuur_sponsor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fuur_sponsor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fuur_sponsor_views_api($module = NULL, $api = NULL) {
  return array(
    'api' => 3,
    'path' => drupal_get_path('module', 'fuur_sponsor'),
    'template path' => drupal_get_path('module', 'fuur_sponsor') . '/templates',
  );
}

/**
 * Implements hook_image_default_styles().
 */
function fuur_sponsor_image_default_styles() {
  $styles = array();

  // Exported image style: fuur_sponsor_logo.
  $styles['fuur_sponsor_logo'] = array(
    'name' => 'fuur_sponsor_logo',
    'label' => 'Füür sponsor logo',
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
          'width' => 225,
          'height' => 225,
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
function fuur_sponsor_node_info() {
  $items = array(
    'fuur_sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Sponsor for the organisation with logo and link.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
