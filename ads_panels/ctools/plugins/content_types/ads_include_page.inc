<?php

/**
 * @file
 * Ctools content-type plugin to provide RSS link.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Panels Page'),
  'admin title' => 'ctools_ads_include_page_content_type_admin_title',
  'icon' => 'icon_node_form.png',
  'category' => t('ADS'),
  'render callback'  => 'ctools_ads_include_page_content_type_render',
  'render last' => TRUE,
  'edit form' => 'ctools_ads_include_page_content_type_edit_form',
  'defaults' => array('page_name' => NULL),
);

/**
 * Renders content.
 */
function ctools_ads_include_page_content_type_render($subtype, &$conf, $panel_args, $context) {
  $block     = new stdClass();
  $title     = $conf['override_title_text'];
  $page_name = check_plain($conf['page_name']);

  $block->module  = 'ads_panels';

  module_load_include("inc", "page_manager", "plugins/tasks/page");

  if (page_manager_page_load($page_name)) {
    $page      = page_manager_page_execute($page_name);

    if (is_array($page))
      $page_html = drupal_render($page);
    else
      $page_html = $page;
  }
  else {
    $page_html = '<div style="padding: 20px; background: #ff3; color:#fff; text-align: center; font-size: 16px;">Page ' . $page_name . ' not found</div>';
  }

  $block->content = '<div class="' . $page_name . '">' . $page_html . '</div>';

  $conf['override_title_text'] = '';

  return $block;
}

/**
 * Returns title.
 */
function ctools_ads_include_page_content_type_admin_title($subtype, $conf, $context) {
  $title = $conf['override_title_text'];

  $page = page_manager_page_load($conf['page_name']);

  return t('Page') . ' "' . ucwords($page->admin_title) . '"';
}

/**
 * Returns settings form.
 */
function ctools_ads_include_page_content_type_edit_form($form, &$form_state) {
  $settings               = $form_state['conf'];
  $form_state['settings'] = $settings;

  $page_objects = ctools_export_load_object('page_manager_pages');
  $pages = array();

  foreach ($page_objects as $page_object) {
    $pages[$page_object->name] = $page_object->admin_title . ' (' . $page_object->path . ')';
  }

  ksort($pages);

  $form['page_name'] = array(
    '#type' => 'select',
    '#title' => t('Page'),
    '#options' => $pages,
    '#default_value' => isset($settings['page_name']) ? $settings['page_name'] : NULL,
  );

  return $form;
}

/**
 * Settings form submission callback.
 */
function ctools_ads_include_page_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('page_name') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
