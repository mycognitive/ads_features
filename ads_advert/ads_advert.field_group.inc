<?php
/**
 * @file
 * ads_advert.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ads_advert_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_step_1|node|advert|form';
  $field_group->group_name = 'group_advert_step_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '1st step',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_ad_link',
      2 => 'field_ad_link_source',
      3 => 'field_ad_phone',
      4 => 'field_ad_price',
      5 => 'field_ad_location',
      6 => 'title',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $export['group_advert_step_1|node|advert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_step_2|node|advert|form';
  $field_group->group_name = 'group_advert_step_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '2st step',
    'weight' => '2',
    'children' => array(
      0 => 'field_ad_category',
      1 => 'field_ad_image',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $export['group_advert_step_2|node|advert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_step_3|node|advert|form';
  $field_group->group_name = 'group_advert_step_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '3rd step',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => 0,
    ),
  );
  $export['group_advert_step_3|node|advert|form'] = $field_group;

  return $export;
}
