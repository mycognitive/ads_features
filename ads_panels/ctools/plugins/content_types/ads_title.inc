<?php

/**
 * @file
 * Ctools content-type plugin to provide RSS link.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Title'),
  'icon' => 'icon_node_form.png',
  'category' => t('ADS'),
  'render callback'  => 'ctools_ads_title_content_type_render',
  'edit form' => 'ctools_ads_title_content_type_edit_form',
  'defaults' => array(),
  'required context' => new ctools_context_optional(t('Node'), 'node'),
);

/**
 * Renders content.
 */
function ctools_ads_title_content_type_render($subtype, &$conf, $panel_args, $context) {
  $block = new stdClass();
  $title = $conf['override_title_text'];

  if (!empty($conf['mlpanels'])) {
    if (!empty($conf['mlpanels'][stoneridge_regional_get_current_language()])) {
      $title = $conf['mlpanels'][stoneridge_regional_get_current_language()]['override_title_text'];
    }
  }

  if (!empty($context)) {
    $title = ctools_context_keyword_substitute($title, array(), array($context));
  }

  $block->module  = 'ads_panels';
  $block->content = array(
    '#markup' => $title,
    '#prefix' => '<' . $conf['tag'] . '>',
    '#suffix' => '</' . $conf['tag'] . '>',
  );

  $conf['override_title_text'] = '';

  return $block;
}

/**
 * Returns title.
 */
function ctools_ads_title_content_type_admin_title($subtype, $conf, $context) {
  return t('Title');
}

/**
 * Returns settings form.
 */
function ctools_ads_title_content_type_edit_form($form, &$form_state) {
  $settings               = $form_state['conf'];
  $form_state['settings'] = $settings;

  $form['tag'] = array(
    '#type' => 'select',
    '#title' => t('Tag to use'),
    '#options' => array(
      'h1' => 'H1',
      'h2' => 'H2',
      'h3' => 'H3',
      'h4' => 'H4',
      'h1s' => 'H1 Smaller',
      'address' => 'address',
      'strong' => 'strong',
    ),
    '#default_value' => isset($settings['tag']) ? $settings['tag'] : 'h1',
  );

  return $form;
}

/**
 * Settings form submission callback.
 */
function ctools_ads_title_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('tag') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
