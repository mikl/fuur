<?php
/**
 * @file
 * fuur_incident.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fuur_incident_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fuur_incident_node_info() {
  $items = array(
    'fuur_incident' => array(
      'name' => t('Incident'),
      'base' => 'node_content',
      'description' => t('A fire or other incident handled by the fire department.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
