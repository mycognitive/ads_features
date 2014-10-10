<?php
/**
 * @file
 * ads_date_time.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ads_date_time_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_days_ago';
  $strongarm->value = '<\\s\\p\\a\\n \\c\\l\\a\\s\\s="\\t\\i\\m\\e\\-\\a\\g\\o\\-\\d\\a\\y\\s" \\t\\i\\t\\l\\e="c">n/j/y - g:ia</\\s\\p\\a\\n>';
  $export['date_format_days_ago'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_time_ago';
  $strongarm->value = '<\\s\\p\\a\\n \\c\\l\\a\\s\\s="\\t\\i\\m\\e\\-\\a\\g\\o\\-\\d\\a\\y\\s" \\t\\i\\t\\l\\e="c">n/j/y - g:ia</\\s\\p\\a\\n>';
  $export['date_format_time_ago'] = $strongarm;

  return $export;
}
