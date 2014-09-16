<?php
/**
 * @file
 * ads_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ads_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_smart_ip';
  $strongarm->value = 'DrupalDatabaseCache';
  $export['cache_class_cache_smart_ip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__user_profile';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__user_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_auto_update';
  $strongarm->value = '1';
  $export['smart_ip_auto_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_blocks_csv_last_pointer';
  $strongarm->value = 0;
  $export['smart_ip_blocks_csv_last_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_blocks_csv_pointer';
  $strongarm->value = 0;
  $export['smart_ip_blocks_csv_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_correct_ipinfodb_key';
  $strongarm->value = FALSE;
  $export['smart_ip_correct_ipinfodb_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_db_update_busy';
  $strongarm->value = FALSE;
  $export['smart_ip_db_update_busy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_debug';
  $strongarm->value = 0;
  $export['smart_ip_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_extract_zip_done';
  $strongarm->value = FALSE;
  $export['smart_ip_extract_zip_done'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_get_zip_done';
  $strongarm->value = FALSE;
  $export['smart_ip_get_zip_done'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_ip2location_bin_cache';
  $strongarm->value = 'no_cache';
  $export['smart_ip_ip2location_bin_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_ip2location_bin_path';
  $strongarm->value = '';
  $export['smart_ip_ip2location_bin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_ipinfodb_key';
  $strongarm->value = 'e9c8acd2aea271128908c5b2d31abda9ac52ed00b35ab04334c8aa5efca5174e';
  $export['smart_ip_ipinfodb_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_location_csv_last_pointer';
  $strongarm->value = 0;
  $export['smart_ip_location_csv_last_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_location_csv_pointer';
  $strongarm->value = 0;
  $export['smart_ip_location_csv_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_bin_db_auto_update';
  $strongarm->value = '1';
  $export['smart_ip_maxmind_bin_db_auto_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_bin_version';
  $strongarm->value = '0';
  $export['smart_ip_maxmind_bin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_key';
  $strongarm->value = '';
  $export['smart_ip_maxmind_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_license';
  $strongarm->value = '';
  $export['smart_ip_maxmind_license'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_service';
  $strongarm->value = 'country';
  $export['smart_ip_maxmind_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_roles_to_geolocate';
  $strongarm->value = array(
    0 => 2,
    1 => 3,
  );
  $export['smart_ip_roles_to_geolocate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_save_user_location_creation';
  $strongarm->value = 1;
  $export['smart_ip_save_user_location_creation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_source';
  $strongarm->value = 'ipinfodb_service';
  $export['smart_ip_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_store_location_csv_done';
  $strongarm->value = FALSE;
  $export['smart_ip_store_location_csv_done'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_test_ip_address';
  $strongarm->value = '217.98.242.138';
  $export['smart_ip_test_ip_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_use_ipinfodb_api_version';
  $strongarm->value = '3';
  $export['smart_ip_use_ipinfodb_api_version'] = $strongarm;

  return $export;
}
