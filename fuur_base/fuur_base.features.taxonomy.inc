<?php
/**
 * @file
 * fuur_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fuur_base_taxonomy_default_vocabularies() {
  return array(
    'fuur_news_category' => array(
      'name' => 'Füür news category',
      'machine_name' => 'fuur_news_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
