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
      "17" : {"sid":"17","wid":"3","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "18" : {"sid":"18","wid":"3","weight":"0","sysid":"0","state":"live","status":"1","name":"live"},
      "19" : {"sid":"19","wid":"3","weight":"0","sysid":"0","state":"draft","status":"1","name":"draft"},
      "20" : {"sid":"20","wid":"3","weight":"0","sysid":"0","state":"needs_approval","status":"1","name":"needs_approval"},
      "21" : {"sid":"21","wid":"3","weight":"0","sysid":"0","state":"needs_editing","status":"1","name":"needs_editing"},
      "22" : {"sid":"22","wid":"3","weight":"0","sysid":"0","state":"processing_","status":"1","name":"processing_"},
      "23" : {"sid":"23","wid":"3","weight":"0","sysid":"0","state":"expired_","status":"1","name":"expired_"},
      "24" : {"sid":"24","wid":"3","weight":"0","sysid":"0","state":"removed_","status":"1","name":"removed_"}
    },
    "transitions" : {
      "119" : {"tid":"119","sid":"17","target_sid":"22","roles":{"9":"9"},"wid":"3","name":"10_15","label":""},
      "113" : {"tid":"113","sid":"17","target_sid":"20","roles":{"-1":-1,"9":"9"},"wid":"3","name":"10_13","label":""},
      "117" : {"tid":"117","sid":"17","target_sid":"18","roles":{"9":"9"},"wid":"3","name":"10_11","label":""},
      "118" : {"tid":"118","sid":"17","target_sid":"23","roles":{"9":"9"},"wid":"3","name":"10_16","label":""},
      "114" : {"tid":"114","sid":"17","target_sid":"24","roles":{"9":"9"},"wid":"3","name":"10_17","label":""},
      "116" : {"tid":"116","sid":"17","target_sid":"21","roles":{"9":"9"},"wid":"3","name":"10_14","label":""},
      "115" : {"tid":"115","sid":"17","target_sid":"19","roles":{"-1":-1,"9":"9"},"wid":"3","name":"10_12","label":""},
      "152" : {"tid":"152","sid":"22","target_sid":"22","roles":{"-1":-1,"9":"9"},"wid":"3","name":"15_15","label":""},
      "153" : {"tid":"153","sid":"22","target_sid":"23","roles":{"9":"9"},"wid":"3","name":"15_16","label":""},
      "155" : {"tid":"155","sid":"22","target_sid":"21","roles":{"9":"9"},"wid":"3","name":"15_14","label":""},
      "151" : {"tid":"151","sid":"22","target_sid":"24","roles":{"9":"9"},"wid":"3","name":"15_17","label":""},
      "154" : {"tid":"154","sid":"23","target_sid":"18","roles":{"9":"9"},"wid":"3","name":"16_11","label":""},
      "147" : {"tid":"147","sid":"22","target_sid":"18","roles":{"9":"9"},"wid":"3","name":"15_11","label":""},
      "146" : {"tid":"146","sid":"21","target_sid":"23","roles":{"9":"9"},"wid":"3","name":"14_16","label":""},
      "156" : {"tid":"156","sid":"23","target_sid":"23","roles":{"-1":-1,"9":"9"},"wid":"3","name":"16_16","label":""},
      "148" : {"tid":"148","sid":"22","target_sid":"19","roles":{"9":"9"},"wid":"3","name":"15_12","label":""},
      "149" : {"tid":"149","sid":"22","target_sid":"20","roles":{"9":"9"},"wid":"3","name":"15_13","label":""},
      "150" : {"tid":"150","sid":"21","target_sid":"24","roles":{"9":"9"},"wid":"3","name":"14_17","label":""},
      "160" : {"tid":"160","sid":"23","target_sid":"24","roles":{"9":"9"},"wid":"3","name":"16_17","label":""},
      "165" : {"tid":"165","sid":"24","target_sid":"22","roles":{"9":"9"},"wid":"3","name":"17_15","label":""},
      "164" : {"tid":"164","sid":"24","target_sid":"20","roles":{"9":"9"},"wid":"3","name":"17_13","label":""},
      "166" : {"tid":"166","sid":"24","target_sid":"23","roles":{"9":"9"},"wid":"3","name":"17_16","label":""},
      "167" : {"tid":"167","sid":"24","target_sid":"24","roles":{"-1":-1,"9":"9"},"wid":"3","name":"17_17","label":""},
      "168" : {"tid":"168","sid":"20","target_sid":"24","roles":{"9":"9"},"wid":"3","name":"13_17","label":""},
      "163" : {"tid":"163","sid":"24","target_sid":"19","roles":{"9":"9"},"wid":"3","name":"17_12","label":""},
      "162" : {"tid":"162","sid":"24","target_sid":"18","roles":{"9":"9"},"wid":"3","name":"17_11","label":""},
      "158" : {"tid":"158","sid":"23","target_sid":"21","roles":{"9":"9"},"wid":"3","name":"16_14","label":""},
      "159" : {"tid":"159","sid":"21","target_sid":"22","roles":{"9":"9"},"wid":"3","name":"14_15","label":""},
      "145" : {"tid":"145","sid":"23","target_sid":"19","roles":{"9":"9"},"wid":"3","name":"16_12","label":""},
      "161" : {"tid":"161","sid":"23","target_sid":"20","roles":{"9":"9"},"wid":"3","name":"16_13","label":""},
      "157" : {"tid":"157","sid":"24","target_sid":"21","roles":{"9":"9"},"wid":"3","name":"17_14","label":""},
      "140" : {"tid":"140","sid":"21","target_sid":"18","roles":{"9":"9"},"wid":"3","name":"14_11","label":""},
      "127" : {"tid":"127","sid":"19","target_sid":"22","roles":{"9":"9"},"wid":"3","name":"12_15","label":""},
      "126" : {"tid":"126","sid":"18","target_sid":"24","roles":{"9":"9"},"wid":"3","name":"11_17","label":""},
      "128" : {"tid":"128","sid":"19","target_sid":"20","roles":{"-1":-1,"9":"9"},"wid":"3","name":"12_13","label":""},
      "129" : {"tid":"129","sid":"19","target_sid":"21","roles":{"9":"9"},"wid":"3","name":"12_14","label":""},
      "130" : {"tid":"130","sid":"18","target_sid":"23","roles":{"9":"9"},"wid":"3","name":"11_16","label":""},
      "125" : {"tid":"125","sid":"19","target_sid":"19","roles":{"-1":-1,"9":"9"},"wid":"3","name":"12_12","label":""},
      "124" : {"tid":"124","sid":"18","target_sid":"20","roles":{"-1":-1,"9":"9"},"wid":"3","name":"11_13","label":""},
      "120" : {"tid":"120","sid":"18","target_sid":"18","roles":{"-1":-1,"9":"9"},"wid":"3","name":"11_11","label":""},
      "121" : {"tid":"121","sid":"18","target_sid":"19","roles":{"-1":-1,"9":"9"},"wid":"3","name":"11_12","label":""},
      "122" : {"tid":"122","sid":"18","target_sid":"21","roles":{"9":"9"},"wid":"3","name":"11_14","label":""},
      "123" : {"tid":"123","sid":"18","target_sid":"22","roles":{"9":"9"},"wid":"3","name":"11_15","label":""},
      "131" : {"tid":"131","sid":"21","target_sid":"19","roles":{"9":"9"},"wid":"3","name":"14_12","label":""},
      "132" : {"tid":"132","sid":"20","target_sid":"18","roles":{"9":"9"},"wid":"3","name":"13_11","label":""},
      "139" : {"tid":"139","sid":"20","target_sid":"23","roles":{"9":"9"},"wid":"3","name":"13_16","label":""},
      "141" : {"tid":"141","sid":"19","target_sid":"18","roles":{"9":"9"},"wid":"3","name":"12_11","label":""},
      "142" : {"tid":"142","sid":"21","target_sid":"20","roles":{"-1":-1,"9":"9"},"wid":"3","name":"14_13","label":""},
      "143" : {"tid":"143","sid":"19","target_sid":"23","roles":{"9":"9"},"wid":"3","name":"12_16","label":""},
      "138" : {"tid":"138","sid":"20","target_sid":"22","roles":{"9":"9"},"wid":"3","name":"13_15","label":""},
      "137" : {"tid":"137","sid":"20","target_sid":"21","roles":{"9":"9"},"wid":"3","name":"13_14","label":""},
      "133" : {"tid":"133","sid":"19","target_sid":"24","roles":{"9":"9"},"wid":"3","name":"12_17","label":""},
      "134" : {"tid":"134","sid":"20","target_sid":"19","roles":{"9":"9"},"wid":"3","name":"13_12","label":""},
      "135" : {"tid":"135","sid":"20","target_sid":"20","roles":{"-1":-1,"9":"9"},"wid":"3","name":"13_13","label":""},
      "136" : {"tid":"136","sid":"21","target_sid":"21","roles":{"-1":-1,"9":"9"},"wid":"3","name":"14_14","label":""},
      "144" : {"tid":"144","sid":"23","target_sid":"22","roles":{"9":"9"},"wid":"3","name":"16_15","label":""}
    },
    "label" : "ADS",
    "typeMap" : [],
    "wid_original" : "3",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "9" : "administrator",
      "7" : "Tag Editor",
      "3" : "Editor",
      "8" : "Taxonomist",
      "6" : "Reviewer",
      "5" : "Organizer",
      "4" : "Moderator"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_advert_ctools_plugin_api($module = NULL, $api = NULL) {
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
