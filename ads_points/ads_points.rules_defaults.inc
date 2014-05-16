<?php
/**
 * @file
 * ads_points.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ads_points_default_rules_configuration() {
  $items = array();
  $items['rules_ads_points'] = entity_import('rules_config', '{ "rules_ads_points" : {
      "LABEL" : "Ads Points",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "points" ],
      "REQUIRES" : [ "rules", "userpoints_rules" ],
      "ON" : {
        "node_insert--advert" : { "bundle" : "advert" },
        "userpoints_event_points_awarded_after" : []
      },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "advert" : "advert" } } } }
      ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "node:author" ],
            "points" : "1",
            "tid" : "0",
            "entity" : [ "" ],
            "description" : "Add Points for c",
            "operation" : "Add Points",
            "display" : 1,
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  return $items;
}
