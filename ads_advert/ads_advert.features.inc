<?php
/**
 * @file
 * ads_advert.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function ads_advert_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'ADS'
  $workflows['ADS'] = entity_import('Workflow', '{
    "name" : "ADS",
    "tab_roles" : [],
    "options" : "a:3:{s:16:\\u0022comment_log_node\\u0022;i:0;s:15:\\u0022comment_log_tab\\u0022;i:0;s:13:\\u0022name_as_title\\u0022;i:0;}",
    "states" : {
      "25" : {"sid":"25","wid":"4","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "26" : {"sid":"26","wid":"4","weight":"0","sysid":"0","state":"live","status":"1","name":"live"},
      "27" : {"sid":"27","wid":"4","weight":"0","sysid":"0","state":"draft","status":"1","name":"draft"},
      "28" : {"sid":"28","wid":"4","weight":"0","sysid":"0","state":"needs_approval","status":"1","name":"needs_approval"},
      "29" : {"sid":"29","wid":"4","weight":"0","sysid":"0","state":"needs_editing","status":"1","name":"needs_editing"},
      "30" : {"sid":"30","wid":"4","weight":"0","sysid":"0","state":"processing_","status":"1","name":"processing_"},
      "31" : {"sid":"31","wid":"4","weight":"0","sysid":"0","state":"expired_","status":"1","name":"expired_"},
      "32" : {"sid":"32","wid":"4","weight":"0","sysid":"0","state":"removed_","status":"1","name":"removed_"}
    },
    "transitions" : {
      "175" : {"tid":"175","sid":"25","target_sid":"28","roles":{"-1":-1,"3":"3"},"wid":"4","name":"10_13","label":""},
      "169" : {"tid":"169","sid":"25","target_sid":"32","roles":{"3":"3"},"wid":"4","name":"10_17","label":""},
      "173" : {"tid":"173","sid":"25","target_sid":"27","roles":{"-1":-1,"3":"3"},"wid":"4","name":"10_12","label":""},
      "174" : {"tid":"174","sid":"25","target_sid":"29","roles":{"3":"3"},"wid":"4","name":"10_14","label":""},
      "170" : {"tid":"170","sid":"25","target_sid":"26","roles":{"3":"3"},"wid":"4","name":"10_11","label":""},
      "172" : {"tid":"172","sid":"25","target_sid":"31","roles":{"3":"3"},"wid":"4","name":"10_16","label":""},
      "171" : {"tid":"171","sid":"25","target_sid":"30","roles":{"3":"3"},"wid":"4","name":"10_15","label":""},
      "208" : {"tid":"208","sid":"26","target_sid":"26","roles":{"-1":-1,"3":"3"},"wid":"4","name":"11_11","label":""},
      "209" : {"tid":"209","sid":"26","target_sid":"27","roles":{"-1":-1,"3":"3"},"wid":"4","name":"11_12","label":""},
      "211" : {"tid":"211","sid":"26","target_sid":"29","roles":{"3":"3"},"wid":"4","name":"11_14","label":""},
      "207" : {"tid":"207","sid":"26","target_sid":"30","roles":{"3":"3"},"wid":"4","name":"11_15","label":""},
      "210" : {"tid":"210","sid":"26","target_sid":"28","roles":{"-1":-1,"3":"3"},"wid":"4","name":"11_13","label":""},
      "203" : {"tid":"203","sid":"27","target_sid":"27","roles":{"-1":-1,"3":"3"},"wid":"4","name":"12_12","label":""},
      "202" : {"tid":"202","sid":"26","target_sid":"32","roles":{"3":"3"},"wid":"4","name":"11_17","label":""},
      "212" : {"tid":"212","sid":"27","target_sid":"30","roles":{"3":"3"},"wid":"4","name":"12_15","label":""},
      "204" : {"tid":"204","sid":"27","target_sid":"28","roles":{"-1":-1,"3":"3"},"wid":"4","name":"12_13","label":""},
      "205" : {"tid":"205","sid":"27","target_sid":"29","roles":{"3":"3"},"wid":"4","name":"12_14","label":""},
      "206" : {"tid":"206","sid":"26","target_sid":"31","roles":{"3":"3"},"wid":"4","name":"11_16","label":""},
      "216" : {"tid":"216","sid":"29","target_sid":"27","roles":{"3":"3"},"wid":"4","name":"14_12","label":""},
      "221" : {"tid":"221","sid":"28","target_sid":"26","roles":{"3":"3"},"wid":"4","name":"13_11","label":""},
      "220" : {"tid":"220","sid":"27","target_sid":"32","roles":{"3":"3"},"wid":"4","name":"12_17","label":""},
      "222" : {"tid":"222","sid":"28","target_sid":"27","roles":{"3":"3"},"wid":"4","name":"13_12","label":""},
      "223" : {"tid":"223","sid":"28","target_sid":"28","roles":{"-1":-1,"3":"3"},"wid":"4","name":"13_13","label":""},
      "224" : {"tid":"224","sid":"29","target_sid":"29","roles":{"-1":-1,"3":"3"},"wid":"4","name":"14_14","label":""},
      "219" : {"tid":"219","sid":"28","target_sid":"29","roles":{"3":"3"},"wid":"4","name":"13_14","label":""},
      "218" : {"tid":"218","sid":"28","target_sid":"30","roles":{"3":"3"},"wid":"4","name":"13_15","label":""},
      "214" : {"tid":"214","sid":"28","target_sid":"31","roles":{"3":"3"},"wid":"4","name":"13_16","label":""},
      "215" : {"tid":"215","sid":"29","target_sid":"26","roles":{"3":"3"},"wid":"4","name":"14_11","label":""},
      "201" : {"tid":"201","sid":"27","target_sid":"26","roles":{"3":"3"},"wid":"4","name":"12_11","label":""},
      "217" : {"tid":"217","sid":"29","target_sid":"28","roles":{"-1":-1,"3":"3"},"wid":"4","name":"14_13","label":""},
      "213" : {"tid":"213","sid":"27","target_sid":"31","roles":{"3":"3"},"wid":"4","name":"12_16","label":""},
      "196" : {"tid":"196","sid":"31","target_sid":"30","roles":{"3":"3"},"wid":"4","name":"16_15","label":""},
      "183" : {"tid":"183","sid":"31","target_sid":"27","roles":{"3":"3"},"wid":"4","name":"16_12","label":""},
      "182" : {"tid":"182","sid":"29","target_sid":"31","roles":{"3":"3"},"wid":"4","name":"14_16","label":""},
      "184" : {"tid":"184","sid":"30","target_sid":"26","roles":{"3":"3"},"wid":"4","name":"15_11","label":""},
      "185" : {"tid":"185","sid":"30","target_sid":"27","roles":{"3":"3"},"wid":"4","name":"15_12","label":""},
      "186" : {"tid":"186","sid":"30","target_sid":"28","roles":{"3":"3"},"wid":"4","name":"15_13","label":""},
      "181" : {"tid":"181","sid":"29","target_sid":"32","roles":{"3":"3"},"wid":"4","name":"14_17","label":""},
      "180" : {"tid":"180","sid":"30","target_sid":"32","roles":{"3":"3"},"wid":"4","name":"15_17","label":""},
      "176" : {"tid":"176","sid":"30","target_sid":"30","roles":{"-1":-1,"3":"3"},"wid":"4","name":"15_15","label":""},
      "177" : {"tid":"177","sid":"30","target_sid":"31","roles":{"3":"3"},"wid":"4","name":"15_16","label":""},
      "178" : {"tid":"178","sid":"31","target_sid":"26","roles":{"3":"3"},"wid":"4","name":"16_11","label":""},
      "179" : {"tid":"179","sid":"30","target_sid":"29","roles":{"3":"3"},"wid":"4","name":"15_14","label":""},
      "187" : {"tid":"187","sid":"31","target_sid":"31","roles":{"-1":-1,"3":"3"},"wid":"4","name":"16_16","label":""},
      "188" : {"tid":"188","sid":"32","target_sid":"29","roles":{"3":"3"},"wid":"4","name":"17_14","label":""},
      "195" : {"tid":"195","sid":"31","target_sid":"29","roles":{"3":"3"},"wid":"4","name":"16_14","label":""},
      "197" : {"tid":"197","sid":"29","target_sid":"30","roles":{"3":"3"},"wid":"4","name":"14_15","label":""},
      "198" : {"tid":"198","sid":"31","target_sid":"32","roles":{"3":"3"},"wid":"4","name":"16_17","label":""},
      "199" : {"tid":"199","sid":"31","target_sid":"28","roles":{"3":"3"},"wid":"4","name":"16_13","label":""},
      "194" : {"tid":"194","sid":"32","target_sid":"26","roles":{"3":"3"},"wid":"4","name":"17_11","label":""},
      "193" : {"tid":"193","sid":"32","target_sid":"27","roles":{"3":"3"},"wid":"4","name":"17_12","label":""},
      "189" : {"tid":"189","sid":"32","target_sid":"28","roles":{"3":"3"},"wid":"4","name":"17_13","label":""},
      "190" : {"tid":"190","sid":"32","target_sid":"30","roles":{"3":"3"},"wid":"4","name":"17_15","label":""},
      "191" : {"tid":"191","sid":"32","target_sid":"31","roles":{"3":"3"},"wid":"4","name":"17_16","label":""},
      "192" : {"tid":"192","sid":"32","target_sid":"32","roles":{"-1":-1,"3":"3"},"wid":"4","name":"17_17","label":""},
      "200" : {"tid":"200","sid":"28","target_sid":"32","roles":{"3":"3"},"wid":"4","name":"13_17","label":""}
    },
    "label" : "ADS",
    "typeMap" : [],
    "wid_original" : "4",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "3" : "administrator"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_advert_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ads_advert_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ads_advert_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favourites".
  $flags['favourite'] = array(
    'entity_type' => 'node',
    'title' => 'Favourites',
    'global' => 0,
    'types' => array(
      0 => 'advert',
    ),
    'errors' => array(),
    'flag_short' => 'Save',
    'flag_long' => '',
    'flag_message' => 'Advert saved. Go to your profile to see saved adverts.',
    'unflag_short' => 'Undo save',
    'unflag_long' => '',
    'unflag_message' => 'Advert removed from the saved list.',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'i18n' => 0,
    'module' => 'ads_advert',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function ads_advert_image_default_styles() {
  $styles = array();

  // Exported image style: ads_advert_preview.
  $styles['ads_advert_preview'] = array(
    'name' => 'ads_advert_preview',
    'label' => 'ads_advert_preview',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
  drupal_alter('node_info', $items);
  return $items;
}
