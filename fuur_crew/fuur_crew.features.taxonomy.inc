<?php
/**
 * @file
 * fuur_crew.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fuur_crew_taxonomy_default_vocabularies() {
  return array(
    'fuur_crew_organisation' => array(
      'name' => 'Füür crew organisation',
      'machine_name' => 'fuur_crew_organisation',
      'description' => 'Organisational hierarchy for crew.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'fuur_crew_rank' => array(
      'name' => 'Füür crew rank',
      'machine_name' => 'fuur_crew_rank',
      'description' => 'Rank of a crew person, usually military-style ranks.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
