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
  $field_group->identifier = 'group_advert_hidden|node|advert|form';
  $field_group->group_name = 'group_advert_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '3',
    'children' => array(
      0 => 'field_ad_link_source',
      1 => 'field_ad_category_node_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'hidden',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_advert_hidden|node|advert|form'] = $field_group;

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
    'label' => 'Basic details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'Additional details',
    'weight' => '1',
    'children' => array(
      0 => 'field_ad_category',
      1 => 'field_ad_image',
      2 => 'field_ad_location',
      3 => 'field_ad_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'Contact and more details',
    'weight' => '2',
    'children' => array(
      0 => 'field_ad_link',
      1 => 'field_ad_phone',
      2 => 'field_ad_contact_method',
      3 => 'field_ad_email',
      4 => 'field_ad_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_advert_step_3|node|advert|form'] = $field_group;

  return $export;
}
