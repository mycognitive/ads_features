<?php

/**
 * @file
 * Ctools content-type plugin to provide RSS link.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Node View'),
  'icon' => 'icon_node_form.png',
  'category' => t('ADS'),
  'render callback'  => 'ctools_ads_node_view_content_type_render',
  'edit form' => 'ctools_ads_node_view_content_type_edit_form',
  'defaults' => array(),
);

/**
 * Renders content.
 */
function ctools_ads_node_view_content_type_render($subtype, &$conf, $panel_args, $context) {
  $block = new stdClass();
  $title = $conf['override_title_text'];

  $block->module  = 'ads_panels';
  $block->content = array();

  $title = arg($conf['param']);
  $path      = str_replace('%', $title, $conf['path']);
  $real_path = drupal_lookup_path('source', $path);
  $node      = menu_get_object('node', $conf['param'], $real_path);

  if (!$node) {
    return $block;
  }

  $form = node_view($node, $conf['view_mode']);

  $form['title'] = array(
    '#type' => 'item',
    '#title' => $node->title,
  );

  // We don't need these fields.
  $form['author']['#access'] = FALSE;
  $form['revision_information']['#access'] = FALSE;
  $form['options']['#access'] = FALSE;
  $form['additional_settings']['#access'] = FALSE;
  $form['#metatags']['#access'] = FALSE;
  $form['links']['#access'] = FALSE;
  $form['language']['#access'] = FALSE;
  $form['revision_information']['#access'] = FALSE;

  unset($form['#view_mode']);
  unset($form['#theme']);

  $block->content = $form;

  $conf['override_title_text'] = '';

  return $block;
}

/**
 * Returns title.
 */
function ctools_ads_node_view_content_type_admin_title($subtype, $conf, $context) {
  return t('Node View');
}

/**
 * Returns settings form.
 */
function ctools_ads_node_view_content_type_edit_form($form, &$form_state) {
  $settings               = $form_state['conf'];
  $form_state['settings'] = $settings;

  $form['path'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#default_value' => isset($settings['path']) ? $settings['path'] : 'node/%',
  );
  $entity_info = entity_get_info('node');

  $view_modes = array();

  foreach ($entity_info['view modes'] as $key => $value) {
    $view_modes[$key] = $value['label'];
  }

  $form['view_mode'] = array(
    '#type' => 'select',
    '#title' => t('View mode'),
    '#default_value' => isset($settings['view_mode']) ? $settings['view_mode'] : reset(array_keys($view_modes)),
    '#options' => $view_modes,
  );

  return $form;
}

/**
 * Settings form submission callback.
 */
function ctools_ads_node_view_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('path', 'view_mode') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
