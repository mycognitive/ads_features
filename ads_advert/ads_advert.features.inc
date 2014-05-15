<?php
/**
 * @file
 * ads_advert.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_advert_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ads_advert_node_info() {
  $items = array(
    'level_1' => array(
      'name' => t('Level 1'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'level_2' => array(
      'name' => t('Level 2'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_workflow_features_default_workflow().
 */
function ads_advert_workflow_features_default_workflow() {
  return array(
    'ADS' => array(
      'name' => 'ADS',
      'tab_roles' => '',
      'options' => 'a:3:{s:16:"comment_log_node";i:0;s:15:"comment_log_tab";i:0;s:13:"name_as_title";i:0;}',
      'states' => array(
        0 => array(
          'state' => '(creation)',
          'weight' => -50,
          'sysid' => 1,
          'status' => 1,
        ),
        1 => array(
          'state' => 'Live',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        2 => array(
          'state' => 'Draft',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        3 => array(
          'state' => 'Needs approval',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        4 => array(
          'state' => 'Needs editing',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        5 => array(
          'state' => 'Processing ',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        6 => array(
          'state' => 'Expired ',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
        7 => array(
          'state' => 'Removed ',
          'weight' => 0,
          'sysid' => 0,
          'status' => 1,
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(creation)',
          'target_sid' => 'Live',
          'roles' => 'author,2',
        ),
        1 => array(
          'sid' => '(creation)',
          'target_sid' => 'Draft',
          'roles' => 'author,2',
        ),
        2 => array(
          'sid' => '(creation)',
          'target_sid' => 'Needs approval',
          'roles' => 2,
        ),
        3 => array(
          'sid' => '(creation)',
          'target_sid' => 'Needs editing',
          'roles' => 2,
        ),
        4 => array(
          'sid' => '(creation)',
          'target_sid' => 'Processing ',
          'roles' => 2,
        ),
        5 => array(
          'sid' => '(creation)',
          'target_sid' => 'Expired ',
          'roles' => 2,
        ),
        6 => array(
          'sid' => '(creation)',
          'target_sid' => 'Removed ',
          'roles' => 2,
        ),
        7 => array(
          'sid' => 'Live',
          'target_sid' => 'Draft',
          'roles' => '2,3',
        ),
        8 => array(
          'sid' => 'Live',
          'target_sid' => 'Needs approval',
          'roles' => '2,3',
        ),
        9 => array(
          'sid' => 'Live',
          'target_sid' => 'Needs editing',
          'roles' => '2,3',
        ),
        10 => array(
          'sid' => 'Live',
          'target_sid' => 'Processing ',
          'roles' => '2,3',
        ),
        11 => array(
          'sid' => 'Live',
          'target_sid' => 'Expired ',
          'roles' => '2,3',
        ),
        12 => array(
          'sid' => 'Live',
          'target_sid' => 'Removed ',
          'roles' => '2,3',
        ),
        13 => array(
          'sid' => 'Draft',
          'target_sid' => 'Live',
          'roles' => '2,3',
        ),
        14 => array(
          'sid' => 'Draft',
          'target_sid' => 'Needs approval',
          'roles' => '2,3',
        ),
        15 => array(
          'sid' => 'Draft',
          'target_sid' => 'Needs editing',
          'roles' => '2,3',
        ),
        16 => array(
          'sid' => 'Draft',
          'target_sid' => 'Processing ',
          'roles' => '2,3',
        ),
        17 => array(
          'sid' => 'Draft',
          'target_sid' => 'Expired ',
          'roles' => '2,3',
        ),
        18 => array(
          'sid' => 'Draft',
          'target_sid' => 'Removed ',
          'roles' => '2,3',
        ),
        19 => array(
          'sid' => 'Needs approval',
          'target_sid' => 'Live',
          'roles' => 3,
        ),
        20 => array(
          'sid' => 'Needs approval',
          'target_sid' => 'Draft',
          'roles' => 3,
        ),
        21 => array(
          'sid' => 'Needs approval',
          'target_sid' => 'Needs editing',
          'roles' => 3,
        ),
        22 => array(
          'sid' => 'Needs approval',
          'target_sid' => 'Processing ',
          'roles' => 3,
        ),
        23 => array(
          'sid' => 'Needs approval',
          'target_sid' => 'Expired ',
          'roles' => 3,
        ),
        24 => array(
          'sid' => 'Needs approval',
          'target_sid' => 'Removed ',
          'roles' => 3,
        ),
        25 => array(
          'sid' => 'Needs editing',
          'target_sid' => 'Live',
          'roles' => 3,
        ),
        26 => array(
          'sid' => 'Needs editing',
          'target_sid' => 'Draft',
          'roles' => 3,
        ),
        27 => array(
          'sid' => 'Needs editing',
          'target_sid' => 'Needs approval',
          'roles' => 3,
        ),
        28 => array(
          'sid' => 'Needs editing',
          'target_sid' => 'Processing ',
          'roles' => 3,
        ),
        29 => array(
          'sid' => 'Needs editing',
          'target_sid' => 'Expired ',
          'roles' => 3,
        ),
        30 => array(
          'sid' => 'Needs editing',
          'target_sid' => 'Removed ',
          'roles' => 3,
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'advert',
          'wid' => 1,
        ),
      ),
    ),
  );
}
