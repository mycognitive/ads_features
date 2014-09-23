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
      "10" : {"sid":"10","wid":"3","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "11" : {"sid":"11","wid":"3","weight":"0","sysid":"0","state":"Live","status":"1","name":"live"},
      "12" : {"sid":"12","wid":"3","weight":"0","sysid":"0","state":"Draft","status":"1","name":"draft"},
      "13" : {"sid":"13","wid":"3","weight":"0","sysid":"0","state":"Needs approval","status":"1","name":"needs_approval"},
      "14" : {"sid":"14","wid":"3","weight":"0","sysid":"0","state":"Needs editing","status":"1","name":"needs_editing"},
      "15" : {"sid":"15","wid":"3","weight":"0","sysid":"0","state":"Processing ","status":"1","name":"processing_"},
      "16" : {"sid":"16","wid":"3","weight":"0","sysid":"0","state":"Expired ","status":"1","name":"expired_"},
      "17" : {"sid":"17","wid":"3","weight":"0","sysid":"0","state":"Removed ","status":"1","name":"removed_"}
    },
    "transitions" : {
      "7" : {"tid":"7","sid":"10","target_sid":"17","roles":{"3":3},"wid":"3","name":"10_17","label":""},
      "1" : {"tid":"1","sid":"10","target_sid":"11","roles":{"3":3},"wid":"3","name":"10_11","label":""},
      "5" : {"tid":"5","sid":"10","target_sid":"15","roles":{"3":3},"wid":"3","name":"10_15","label":""},
      "6" : {"tid":"6","sid":"10","target_sid":"16","roles":{"3":3},"wid":"3","name":"10_16","label":""},
      "2" : {"tid":"2","sid":"10","target_sid":"12","roles":{"-1":-1,"3":3},"wid":"3","name":"10_12","label":""},
      "4" : {"tid":"4","sid":"10","target_sid":"14","roles":{"3":3},"wid":"3","name":"10_14","label":""},
      "3" : {"tid":"3","sid":"10","target_sid":"13","roles":{"-1":-1,"3":3},"wid":"3","name":"10_13","label":""},
      "40" : {"tid":"40","sid":"15","target_sid":"15","roles":{"-1":-1,"3":3},"wid":"3","name":"15_15","label":""},
      "41" : {"tid":"41","sid":"15","target_sid":"16","roles":{"3":3},"wid":"3","name":"15_16","label":""},
      "43" : {"tid":"43","sid":"16","target_sid":"11","roles":{"3":3},"wid":"3","name":"16_11","label":""},
      "39" : {"tid":"39","sid":"15","target_sid":"14","roles":{"3":3},"wid":"3","name":"15_14","label":""},
      "42" : {"tid":"42","sid":"15","target_sid":"17","roles":{"3":3},"wid":"3","name":"15_17","label":""},
      "35" : {"tid":"35","sid":"14","target_sid":"17","roles":{"3":3},"wid":"3","name":"14_17","label":""},
      "34" : {"tid":"34","sid":"14","target_sid":"16","roles":{"3":3},"wid":"3","name":"14_16","label":""},
      "44" : {"tid":"44","sid":"16","target_sid":"12","roles":{"3":3},"wid":"3","name":"16_12","label":""},
      "36" : {"tid":"36","sid":"15","target_sid":"11","roles":{"3":3},"wid":"3","name":"15_11","label":""},
      "37" : {"tid":"37","sid":"15","target_sid":"12","roles":{"3":3},"wid":"3","name":"15_12","label":""},
      "38" : {"tid":"38","sid":"15","target_sid":"13","roles":{"3":3},"wid":"3","name":"15_13","label":""},
      "48" : {"tid":"48","sid":"16","target_sid":"16","roles":{"-1":-1,"3":3},"wid":"3","name":"16_16","label":""},
      "53" : {"tid":"53","sid":"17","target_sid":"14","roles":{"3":3},"wid":"3","name":"17_14","label":""},
      "52" : {"tid":"52","sid":"17","target_sid":"13","roles":{"3":3},"wid":"3","name":"17_13","label":""},
      "54" : {"tid":"54","sid":"17","target_sid":"15","roles":{"3":3},"wid":"3","name":"17_15","label":""},
      "55" : {"tid":"55","sid":"17","target_sid":"16","roles":{"3":3},"wid":"3","name":"17_16","label":""},
      "56" : {"tid":"56","sid":"17","target_sid":"17","roles":{"-1":-1,"3":3},"wid":"3","name":"17_17","label":""},
      "51" : {"tid":"51","sid":"17","target_sid":"12","roles":{"3":3},"wid":"3","name":"17_12","label":""},
      "50" : {"tid":"50","sid":"17","target_sid":"11","roles":{"3":3},"wid":"3","name":"17_11","label":""},
      "46" : {"tid":"46","sid":"16","target_sid":"14","roles":{"3":3},"wid":"3","name":"16_14","label":""},
      "47" : {"tid":"47","sid":"16","target_sid":"15","roles":{"3":3},"wid":"3","name":"16_15","label":""},
      "33" : {"tid":"33","sid":"14","target_sid":"15","roles":{"3":3},"wid":"3","name":"14_15","label":""},
      "49" : {"tid":"49","sid":"16","target_sid":"17","roles":{"3":3},"wid":"3","name":"16_17","label":""},
      "45" : {"tid":"45","sid":"16","target_sid":"13","roles":{"3":3},"wid":"3","name":"16_13","label":""},
      "28" : {"tid":"28","sid":"13","target_sid":"17","roles":{"3":3},"wid":"3","name":"13_17","label":""},
      "15" : {"tid":"15","sid":"12","target_sid":"11","roles":{"3":3},"wid":"3","name":"12_11","label":""},
      "14" : {"tid":"14","sid":"11","target_sid":"17","roles":{"3":3},"wid":"3","name":"11_17","label":""},
      "16" : {"tid":"16","sid":"12","target_sid":"12","roles":{"-1":-1,"3":3},"wid":"3","name":"12_12","label":""},
      "17" : {"tid":"17","sid":"12","target_sid":"13","roles":{"-1":-1,"3":3},"wid":"3","name":"12_13","label":""},
      "18" : {"tid":"18","sid":"12","target_sid":"14","roles":{"3":3},"wid":"3","name":"12_14","label":""},
      "13" : {"tid":"13","sid":"11","target_sid":"16","roles":{"3":3},"wid":"3","name":"11_16","label":""},
      "12" : {"tid":"12","sid":"11","target_sid":"15","roles":{"3":3},"wid":"3","name":"11_15","label":""},
      "8" : {"tid":"8","sid":"11","target_sid":"11","roles":{"-1":-1,"3":3},"wid":"3","name":"11_11","label":""},
      "9" : {"tid":"9","sid":"11","target_sid":"12","roles":{"-1":-1,"3":3},"wid":"3","name":"11_12","label":""},
      "10" : {"tid":"10","sid":"11","target_sid":"13","roles":{"-1":-1,"3":3},"wid":"3","name":"11_13","label":""},
      "11" : {"tid":"11","sid":"11","target_sid":"14","roles":{"3":3},"wid":"3","name":"11_14","label":""},
      "19" : {"tid":"19","sid":"12","target_sid":"15","roles":{"3":3},"wid":"3","name":"12_15","label":""},
      "20" : {"tid":"20","sid":"12","target_sid":"16","roles":{"3":3},"wid":"3","name":"12_16","label":""},
      "27" : {"tid":"27","sid":"13","target_sid":"16","roles":{"3":3},"wid":"3","name":"13_16","label":""},
      "29" : {"tid":"29","sid":"14","target_sid":"11","roles":{"3":3},"wid":"3","name":"14_11","label":""},
      "30" : {"tid":"30","sid":"14","target_sid":"12","roles":{"3":3},"wid":"3","name":"14_12","label":""},
      "31" : {"tid":"31","sid":"14","target_sid":"13","roles":{"-1":-1,"3":3},"wid":"3","name":"14_13","label":""},
      "26" : {"tid":"26","sid":"13","target_sid":"15","roles":{"3":3},"wid":"3","name":"13_15","label":""},
      "25" : {"tid":"25","sid":"13","target_sid":"14","roles":{"3":3},"wid":"3","name":"13_14","label":""},
      "21" : {"tid":"21","sid":"12","target_sid":"17","roles":{"3":3},"wid":"3","name":"12_17","label":""},
      "22" : {"tid":"22","sid":"13","target_sid":"11","roles":{"3":3},"wid":"3","name":"13_11","label":""},
      "23" : {"tid":"23","sid":"13","target_sid":"12","roles":{"3":3},"wid":"3","name":"13_12","label":""},
      "24" : {"tid":"24","sid":"13","target_sid":"13","roles":{"-1":-1,"3":3},"wid":"3","name":"13_13","label":""},
      "32" : {"tid":"32","sid":"14","target_sid":"14","roles":{"-1":-1,"3":3},"wid":"3","name":"14_14","label":""}
    },
    "label" : "ADS",
    "typeMap" : [],
    "wid_original" : "3",
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
