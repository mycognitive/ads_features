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
      "41" : {"sid":"41","wid":"6","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "42" : {"sid":"42","wid":"6","weight":"0","sysid":"0","state":"live","status":"1","name":"live"},
      "43" : {"sid":"43","wid":"6","weight":"0","sysid":"0","state":"draft","status":"1","name":"draft"},
      "44" : {"sid":"44","wid":"6","weight":"0","sysid":"0","state":"needs_approval","status":"1","name":"needs_approval"},
      "45" : {"sid":"45","wid":"6","weight":"0","sysid":"0","state":"needs_editing","status":"1","name":"needs_editing"},
      "46" : {"sid":"46","wid":"6","weight":"0","sysid":"0","state":"processing_","status":"1","name":"processing_"},
      "47" : {"sid":"47","wid":"6","weight":"0","sysid":"0","state":"expired_","status":"1","name":"expired_"},
      "48" : {"sid":"48","wid":"6","weight":"0","sysid":"0","state":"removed_","status":"1","name":"removed_"}
    },
    "transitions" : {
      "287" : {"tid":"287","sid":"41","target_sid":"43","roles":{"-1":-1,"9":"9"},"wid":"6","name":"10_12","label":""},
      "281" : {"tid":"281","sid":"41","target_sid":"46","roles":{"9":"9"},"wid":"6","name":"10_15","label":""},
      "285" : {"tid":"285","sid":"41","target_sid":"48","roles":{"9":"9"},"wid":"6","name":"10_17","label":""},
      "286" : {"tid":"286","sid":"41","target_sid":"45","roles":{"9":"9"},"wid":"6","name":"10_14","label":""},
      "282" : {"tid":"282","sid":"41","target_sid":"44","roles":{"-1":-1,"9":"9"},"wid":"6","name":"10_13","label":""},
      "284" : {"tid":"284","sid":"41","target_sid":"47","roles":{"9":"9"},"wid":"6","name":"10_16","label":""},
      "283" : {"tid":"283","sid":"41","target_sid":"42","roles":{"9":"9"},"wid":"6","name":"10_11","label":""},
      "320" : {"tid":"320","sid":"42","target_sid":"42","roles":{"-1":-1,"9":"9"},"wid":"6","name":"11_11","label":""},
      "321" : {"tid":"321","sid":"42","target_sid":"43","roles":{"-1":-1,"9":"9"},"wid":"6","name":"11_12","label":""},
      "323" : {"tid":"323","sid":"42","target_sid":"46","roles":{"9":"9"},"wid":"6","name":"11_15","label":""},
      "319" : {"tid":"319","sid":"42","target_sid":"44","roles":{"-1":-1,"9":"9"},"wid":"6","name":"11_13","label":""},
      "322" : {"tid":"322","sid":"42","target_sid":"45","roles":{"9":"9"},"wid":"6","name":"11_14","label":""},
      "315" : {"tid":"315","sid":"43","target_sid":"44","roles":{"-1":-1,"9":"9"},"wid":"6","name":"12_13","label":""},
      "314" : {"tid":"314","sid":"42","target_sid":"48","roles":{"9":"9"},"wid":"6","name":"11_17","label":""},
      "324" : {"tid":"324","sid":"45","target_sid":"43","roles":{"9":"9"},"wid":"6","name":"14_12","label":""},
      "316" : {"tid":"316","sid":"43","target_sid":"45","roles":{"9":"9"},"wid":"6","name":"12_14","label":""},
      "317" : {"tid":"317","sid":"42","target_sid":"47","roles":{"9":"9"},"wid":"6","name":"11_16","label":""},
      "318" : {"tid":"318","sid":"43","target_sid":"43","roles":{"-1":-1,"9":"9"},"wid":"6","name":"12_12","label":""},
      "328" : {"tid":"328","sid":"45","target_sid":"44","roles":{"-1":-1,"9":"9"},"wid":"6","name":"14_13","label":""},
      "333" : {"tid":"333","sid":"44","target_sid":"43","roles":{"9":"9"},"wid":"6","name":"13_12","label":""},
      "332" : {"tid":"332","sid":"43","target_sid":"48","roles":{"9":"9"},"wid":"6","name":"12_17","label":""},
      "334" : {"tid":"334","sid":"44","target_sid":"44","roles":{"-1":-1,"9":"9"},"wid":"6","name":"13_13","label":""},
      "335" : {"tid":"335","sid":"45","target_sid":"45","roles":{"-1":-1,"9":"9"},"wid":"6","name":"14_14","label":""},
      "336" : {"tid":"336","sid":"47","target_sid":"46","roles":{"9":"9"},"wid":"6","name":"16_15","label":""},
      "331" : {"tid":"331","sid":"44","target_sid":"45","roles":{"9":"9"},"wid":"6","name":"13_14","label":""},
      "330" : {"tid":"330","sid":"44","target_sid":"46","roles":{"9":"9"},"wid":"6","name":"13_15","label":""},
      "326" : {"tid":"326","sid":"44","target_sid":"47","roles":{"9":"9"},"wid":"6","name":"13_16","label":""},
      "327" : {"tid":"327","sid":"43","target_sid":"42","roles":{"9":"9"},"wid":"6","name":"12_11","label":""},
      "313" : {"tid":"313","sid":"43","target_sid":"46","roles":{"9":"9"},"wid":"6","name":"12_15","label":""},
      "329" : {"tid":"329","sid":"43","target_sid":"47","roles":{"9":"9"},"wid":"6","name":"12_16","label":""},
      "325" : {"tid":"325","sid":"44","target_sid":"42","roles":{"9":"9"},"wid":"6","name":"13_11","label":""},
      "308" : {"tid":"308","sid":"45","target_sid":"46","roles":{"9":"9"},"wid":"6","name":"14_15","label":""},
      "295" : {"tid":"295","sid":"47","target_sid":"47","roles":{"-1":-1,"9":"9"},"wid":"6","name":"16_16","label":""},
      "294" : {"tid":"294","sid":"45","target_sid":"47","roles":{"9":"9"},"wid":"6","name":"14_16","label":""},
      "296" : {"tid":"296","sid":"46","target_sid":"43","roles":{"9":"9"},"wid":"6","name":"15_12","label":""},
      "297" : {"tid":"297","sid":"46","target_sid":"44","roles":{"9":"9"},"wid":"6","name":"15_13","label":""},
      "298" : {"tid":"298","sid":"45","target_sid":"48","roles":{"9":"9"},"wid":"6","name":"14_17","label":""},
      "293" : {"tid":"293","sid":"46","target_sid":"42","roles":{"9":"9"},"wid":"6","name":"15_11","label":""},
      "292" : {"tid":"292","sid":"47","target_sid":"42","roles":{"9":"9"},"wid":"6","name":"16_11","label":""},
      "288" : {"tid":"288","sid":"46","target_sid":"46","roles":{"-1":-1,"9":"9"},"wid":"6","name":"15_15","label":""},
      "289" : {"tid":"289","sid":"46","target_sid":"47","roles":{"9":"9"},"wid":"6","name":"15_16","label":""},
      "290" : {"tid":"290","sid":"46","target_sid":"45","roles":{"9":"9"},"wid":"6","name":"15_14","label":""},
      "291" : {"tid":"291","sid":"46","target_sid":"48","roles":{"9":"9"},"wid":"6","name":"15_17","label":""},
      "299" : {"tid":"299","sid":"47","target_sid":"48","roles":{"9":"9"},"wid":"6","name":"16_17","label":""},
      "300" : {"tid":"300","sid":"48","target_sid":"46","roles":{"9":"9"},"wid":"6","name":"17_15","label":""},
      "307" : {"tid":"307","sid":"47","target_sid":"45","roles":{"9":"9"},"wid":"6","name":"16_14","label":""},
      "309" : {"tid":"309","sid":"47","target_sid":"43","roles":{"9":"9"},"wid":"6","name":"16_12","label":""},
      "310" : {"tid":"310","sid":"47","target_sid":"44","roles":{"9":"9"},"wid":"6","name":"16_13","label":""},
      "311" : {"tid":"311","sid":"48","target_sid":"45","roles":{"9":"9"},"wid":"6","name":"17_14","label":""},
      "306" : {"tid":"306","sid":"48","target_sid":"42","roles":{"9":"9"},"wid":"6","name":"17_11","label":""},
      "305" : {"tid":"305","sid":"48","target_sid":"43","roles":{"9":"9"},"wid":"6","name":"17_12","label":""},
      "301" : {"tid":"301","sid":"48","target_sid":"44","roles":{"9":"9"},"wid":"6","name":"17_13","label":""},
      "302" : {"tid":"302","sid":"48","target_sid":"47","roles":{"9":"9"},"wid":"6","name":"17_16","label":""},
      "303" : {"tid":"303","sid":"48","target_sid":"48","roles":{"-1":-1,"9":"9"},"wid":"6","name":"17_17","label":""},
      "304" : {"tid":"304","sid":"44","target_sid":"48","roles":{"9":"9"},"wid":"6","name":"13_17","label":""},
      "312" : {"tid":"312","sid":"45","target_sid":"42","roles":{"9":"9"},"wid":"6","name":"14_11","label":""}
    },
    "label" : "ADS",
    "typeMap" : [],
    "wid_original" : "6",
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
    'flag_short' => 'Save',
    'flag_long' => '',
    'flag_message' => 'Advert saved. Go to your profile to see saved adverts.',
    'unflag_short' => 'Undo save',
    'unflag_long' => '',
    'unflag_message' => 'Advert removed from the saved list.',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'teaser' => TRUE,
      'full' => TRUE,
    ),
    'show_as_field' => FALSE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
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
    'label' => 'ads_advert_preview',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
