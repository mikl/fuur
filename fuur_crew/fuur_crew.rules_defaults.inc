<?php
/**
 * @file
 * fuur_crew.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fuur_crew_default_rules_configuration() {
  $items = array();
  $items['rules_fuur_crew_public_profile_crud'] = entity_import('rules_config', '{ "rules_fuur_crew_public_profile_crud" : {
      "LABEL" : "F\\u00fc\\u00fcr crew public profile crud",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "F\\u00fc\\u00fcr" ],
      "REQUIRES" : [ "rules", "cache_actions", "field_collection" ],
      "ON" : {
        "field_collection_item_insert" : [],
        "field_collection_item_update" : [],
        "field_collection_item_delete" : []
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "field_collection_item" ],
            "type" : "field_collection_item",
            "bundle" : { "value" : { "fuur_crew_public_profile" : "fuur_crew_public_profile" } }
          }
        }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "fuur_crew_public_profiles" : "fuur_crew_public_profiles" } } } }
      ]
    }
  }');
  return $items;
}
