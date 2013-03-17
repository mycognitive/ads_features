<?php
/**
 * @file
 * ads_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ads_content_types_node_info() {
  $items = array(
    'advert' => array(
      'name' => t('Advert'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
