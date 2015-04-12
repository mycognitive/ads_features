<?php
/**
 * @file
 * ads_site_settings.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function ads_site_settings_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = '38f1e1c81385309adcb729f06f0f261e';
  $item->name = 'Bihourly';
  $item->source_id = 'db';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '0';
  $item->profile_id = 'default';
  $item->keep = 12;
  $item->period = 7200;
  $item->enabled = TRUE;
  $item->cron = '0';
  $item->cron_schedule = '0 4 * * *';
  $export['38f1e1c81385309adcb729f06f0f261e'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = '8d6d5f1b418b5f9fd54db215f0887e08';
  $item->name = 'Daily';
  $item->source_id = 'db';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '0';
  $item->profile_id = 'default';
  $item->keep = 6;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = '0';
  $item->cron_schedule = '0 4 * * *';
  $export['8d6d5f1b418b5f9fd54db215f0887e08'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'ee44eb83195eb655692ca3429d28aa5c';
  $item->name = 'Weekly';
  $item->source_id = 'db';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '0';
  $item->profile_id = 'default';
  $item->keep = 4;
  $item->period = 604800;
  $item->enabled = TRUE;
  $item->cron = '0';
  $item->cron_schedule = '0 4 * * *';
  $export['ee44eb83195eb655692ca3429d28aa5c'] = $item;

  return $export;
}
