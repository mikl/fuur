<?php
/**
 * @file
 * fuur_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fuur_base_default_rules_configuration() {
  $items = array();
  $items['fuur_crew_fuur_news_crud'] = entity_import('rules_config', '{ "fuur_crew_fuur_news_crud" : {
      "LABEL" : "F\\u00fc\\u00fcr news crud",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "F\\u00fc\\u00fcr" ],
      "REQUIRES" : [ "cache_actions", "rules" ],
      "ON" : {
        "node_insert--fuur_news" : { "bundle" : "fuur_news" },
        "node_update--fuur_news" : { "bundle" : "fuur_news" },
        "node_delete--fuur_news" : { "bundle" : "fuur_news" }
      },
      "DO" : [
        { "cache_actions_action_clear_views_cache" : { "view" : { "value" : { "fuur_news_list" : "fuur_news_list" } } } }
      ]
    }
  }');
  return $items;
}
