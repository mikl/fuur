<?php
/**
 * @file
 * fuur_crew.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fuur_crew_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fuur_crew_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fuur_crew_image_default_styles() {
  $styles = array();

  // Exported image style: fuur_crew_portrait.
  $styles['fuur_crew_portrait'] = array(
    'label' => 'Füür crew portrait',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
