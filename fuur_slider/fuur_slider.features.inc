<?php
/**
 * @file
 * fuur_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fuur_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function fuur_slider_image_default_styles() {
  $styles = array();

  // Exported image style: fuur_slider.
  $styles['fuur_slider'] = array(
    'label' => 'Füür slider',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 715,
          'height' => 477,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
