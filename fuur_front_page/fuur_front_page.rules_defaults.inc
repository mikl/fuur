<?php
/**
 * @file
 * fuur_front_page.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fuur_front_page_default_rules_configuration() {
  $items = array();
  $items['fuur_crew_fuur_frontpage_previously_promoted_nodes'] = entity_import('rules_config', '{ "fuur_crew_fuur_frontpage_previously_promoted_nodes" : {
      "LABEL" : "F\\u00fc\\u00fcr frontpage previously promoted nodes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "F\\u00fc\\u00fcr" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "NOT node_is_promoted" : { "node" : [ "node" ] } },
        { "NOT data_is" : { "data" : [ "node:promote" ], "value" : [ "node-unchanged:promote" ] } }
      ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "fuur_front_page_teasers" : "fuur_front_page_teasers" } } } }
      ]
    }
  }');
  $items['fuur_crew_fuur_frontpage_promoted_nodes'] = entity_import('rules_config', '{ "fuur_crew_fuur_frontpage_promoted_nodes" : {
      "LABEL" : "F\\u00fc\\u00fcr frontpage promoted nodes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "F\\u00fc\\u00fcr" ],
      "REQUIRES" : [ "rules", "cache_actions" ],
      "ON" : { "node_insert" : [], "node_update" : [], "node_delete" : [] },
      "IF" : [ { "node_is_promoted" : { "node" : [ "node" ] } } ],
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "fuur_front_page_teasers" : "fuur_front_page_teasers" } } } }
      ]
    }
  }');
  return $items;
}
