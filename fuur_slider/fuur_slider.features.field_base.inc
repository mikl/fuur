<?php
/**
 * @file
 * fuur_slider.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fuur_slider_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'fuur_slider_images'.
  $field_bases['fuur_slider_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'fuur_slider_images',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
