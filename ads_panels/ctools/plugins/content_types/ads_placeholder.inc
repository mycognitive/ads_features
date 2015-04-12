<?php

/**
 * @file
 *   Ctools content-type plugin to provide placeholder items.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Placeholder'),
  'admin title' => 'ctools_ads_placeholder_content_type_admin_title',
  'icon' => 'icon_node_form.png',
  'category' => t('ADS'),
  'render callback'  => 'ctools_ads_placeholder_content_type_render',
  'edit form' => 'ctools_ads_placeholder_content_type_edit_form',
  'defaults' => array('shape' => 'rows'),
);

/**
 * Renders content.
 */
function ctools_ads_placeholder_content_type_render($subtype, &$conf, $panel_args, $context) {

  drupal_add_css(drupal_get_path('module', 'ads_panels') . '/sass/ctools/ads_placeholder.scss');

  $block  = new stdClass();
  $title  = $conf['override_title_text'];
  $size   = check_plain($conf['size']);
  $shape  = @check_plain($conf['shape']);

  $block->module  = 'ads_panels';
  $block->content = array(
    '#markup' =>
    '<div class="ads-placeholder ' . $size . ' ' . $shape . '"><h2>'
    . $title . '</h2><span>'
    . t('Please place suitable element here.')
    . '</span></div>',
  );

  $conf['override_title_text'] = '';

  return $block;
}

/**
 * Returns title.
 */
function ctools_ads_placeholder_content_type_admin_title($subtype, $conf, $context) {
  $title = $conf['override_title_text'];
  return t('Placeholder for "!name"', array('!name' => ucwords($title)));
}

/**
 * Returns settings form.
 */
function ctools_ads_placeholder_content_type_edit_form($form, &$form_state) {
  $settings               = $form_state['conf'];
  $form_state['settings'] = $settings;

  $form['size'] = array(
    '#type' => 'select',
    '#title' => t('Placeholder size'),
    '#options' => array(
      'tiny' => t('Tiny'),
      'small' => t('Small'),
      'medium' => t('Medium'),
      'big' => t('Big'),
      'huge' => t('Huge'),
    ),
    '#default_value' => isset($settings['size']) ? $settings['size'] : '100',
  );

  $form['shape'] = array(
    '#type' => 'select',
    '#title' => t('Shape'),
    '#options' => array(
      'rows' => t('Rows'),
      'blocks' => t('Blocks'),
    ),
    '#default_value' => isset($settings['shape']) ? $settings['shape'] : 'rows',
  );

  return $form;
}

/**
 * Settings form submission callback.
 */
function ctools_ads_placeholder_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('size', 'shape') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
