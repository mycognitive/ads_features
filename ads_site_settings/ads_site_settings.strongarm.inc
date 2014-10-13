<?php
/**
 * @file
 * ads_site_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ads_site_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_advert_pattern';
  $strongarm->value = 'advert/[node:title]';
  $export['pathauto_node_advert_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_categories_pattern';
  $strongarm->value = 'adverts/[term:parents:join-path]/[term:name]';
  $export['pathauto_taxonomy_term_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_locations_pattern';
  $strongarm->value = 'location/[term:parents:join-path]/[term:name]';
  $export['pathauto_taxonomy_term_locations_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:parents:join-path]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'profile/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'rate',
      'tag' => 'vote',
      'title' => 'rate',
      'node_types' => array(
        0 => 'advert',
      ),
      'comment_types' => array(
        0 => 'advert',
      ),
      'options' => array(
        0 => array(
          0 => 1,
          1 => 'up',
        ),
        1 => array(
          0 => -1,
          1 => 'down',
        ),
      ),
      'template' => 'thumbs_up_down',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '5',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'allow_voting_by_author' => 0,
      'noperm_behaviour' => '3',
      'displayed' => '1',
      'displayed_just_voted' => '2',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '0',
      'use_source_translation' => TRUE,
      'value_type' => 'points',
      'theme' => 'rate_template_thumbs_up_down',
      'css' => 'sites/all/modules/contrib/rate/templates/thumbs-up-down/thumbs-up-down.css',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus';
  $strongarm->value = array(
    'menu-footer-menu' => 'menu-footer-menu',
    'main-menu' => 'main-menu',
    'devel' => 0,
    'features' => 0,
    'management' => 0,
    'navigation' => 0,
    'user-menu' => 0,
  );
  $export['site_map_show_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = TRUE;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '200x200';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '200';
  $export['user_picture_file_size'] = $strongarm;

  return $export;
}
