<?php

/**
 * @file
 *   Ctools content-type plugin to provide separator.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Separator'),
  'icon' => 'icon_node_form.png',
  'category' => t('ADS'),
  'render callback'  => 'ctools_ads_separator_content_type_render',
  'edit form' => 'ctools_ads_separator_content_type_edit_form',
  'defaults' => array(),
);

/**
 * Renders content.
 */
function ctools_ads_separator_content_type_render($subtype, &$conf, $panel_args, $context) {
  $block = new stdClass();
  $title = $conf['override_title_text'];

  if (!empty($context)) {
    $title = ctools_context_keyword_substitute($title, array(), array($context));
  }

  $block->module  = 'ads_panels';
  $block->content = array(
    '#markup' => '<hr style="margin: ' . ((int) $conf['size']) . 'px 0" />',
  );

  $conf['override_title_text'] = '';

  return $block;
}

/**
 * Returns title.
 */
function ctools_ads_separator_content_type_admin_title($subtype, $conf, $context) {
  return t('Separator');
}

/**
 * Returns settings form.
 */
function ctools_ads_separator_content_type_edit_form($form, &$form_state) {
  $settings               = $form_state['conf'];
  $form_state['settings'] = $settings;

  $form['size'] = array(
    '#type' => 'select',
    '#title' => t('Size'),
    '#options' => array(
      '5' => '5',
      '10' => '10',
      '15' => '15',
      '25' => '25',
      '40' => '40',
    ),
    '#default_value' => isset($settings['size']) ? $settings['size'] : '10',
  );

  return $form;
}

/**
 * Settings form submission callback.
 */
function ctools_ads_separator_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('size') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
