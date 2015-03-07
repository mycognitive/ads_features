<?php

/**
 * @file
 *   Ctools content-type plugin for "Items per page" selector.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Items per page'),
  'icon' => 'icon_node_form.png',
  'category' => t('ADS'),
  'render callback'  => 'ctools_ads_items_per_page_content_type_render',
  'edit form' => 'ctools_ads_items_per_page_content_type_edit_form',
  'defaults' => array(),
);

/**
 * Renders content.
 */
function ctools_ads_items_per_page_content_type_render($subtype, &$conf, $panel_args, $context) {
  $block = new stdClass();
  $title = $conf['override_title_text'];

  if (empty($conf['view_name']))
  {
    $block->content = array(
      '#markup' => t('View must be set in order "items per page" selector to work'),
    );

    return $block;
  }

  $view = views_get_view($conf['view_name']);

  if (!$view)
  {
    $block->content = array(
      '#markup' => t('Items per page selector: View !view_name no longer exists', array(
        '!view_name' => $options['view_name'],
      )),
    );

    return $block;
  }

  $view_pager = $view->display[empty($view->current_display) ? 'default' : $view->current_display]->display_options['pager'];

  $query_params = drupal_get_query_parameters();

  if (!empty($query_params['items_per_page'])) {
    $items_per_page = $query_params['items_per_page'];
  }
  else {
    $items_per_page = $view_pager['options']['items_per_page'];
  }

  $allowed_values = array_map('trim', explode(',', $view_pager['options']['expose']['items_per_page_options']));

  ctools_include('ajax');

  $view_id = 'items_per_page_' . $view->name;

  $block->module  = 'ads_panels';
  $block->content = array(
    'items_per_page' => array(
      '#id' => $view_id,
      '#type' => 'select',
      '#title' => !empty($title) ? $title : t('Items per page'),
      '#options' => array_combine ($allowed_values, $allowed_values),
      '#value' => $items_per_page,
      '#attached' => array(
        'js' => array(
          array(
            'type' => 'inline',
            'data' => '
              jQuery(function () {
                jQuery("#' . $view_id . '").change (function () {
                  var queryParameters = {}, queryString = location.search.substring(1),
                      re = /([^&=]+)=([^&]*)/g, m;

                  while (m = re.exec(queryString))
                    queryParameters[decodeURIComponent(m[1])] = decodeURIComponent(m[2]);

                  queryParameters["items_per_page"] = jQuery("#' . $view_id . '").val();

                  location.search = jQuery.param(queryParameters); // Causes page to reload
               });
              });
            ',
          ),
        ),
      ),
    ),
  );

  $form_state = array();

  $block->content['items_per_page'] = ajax_process_form($block->content['items_per_page'], $form_state);
  
  $conf['override_title_text'] = '';

  return $block;
}

function ctools_ads_items_per_page_change_callback($form, $form_state) {
  die ('ok');
  ctools_include('ajax');

  $commands = array();

  $commands[] = ctools_ajax_command_reload();

  echo ajax_render ($commands);
  exit;
}

/**
 * Returns title.
 */
function ctools_ads_items_per_page_content_type_admin_title($subtype, $conf, $context) {
  return t('Items per page');
}

/**
 * Returns settings form.
 */
function ctools_ads_items_per_page_content_type_edit_form($form, &$form_state) {
  $settings               = $form_state['conf'];
  $form_state['settings'] = $settings;

  $view_objects = views_get_enabled_views();
  $views        = array();

  foreach ($view_objects as $view) {
    $views[$view->name] = $view->human_name;
  }

  $form['view_name'] = array(
    '#type' => 'select',
    '#title' => t('View'),
    '#options' => $views,
    '#default_value' => isset($settings['path']) ? $settings['path'] : '',
  );

  return $form;
}

/**
 * Settings form submission callback.
 */
function ctools_ads_items_per_page_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('view_name') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
