<?php
/**
 * @file
 * Admin functions for massive module.
 */

/**
 * Generates form to configure boosts.
 *
 * @see entity_score_settings_form_submit()
 */
function entity_score_settings_form() {
  drupal_add_js(drupal_get_path('module', 'entity_score') . '/js/entity_score.js');

  $form = array();

  $form['text_settings'] = array(
    '#markup' => t('Settings'),
    '#prefix' => '<h1>',
    '#suffix' => '</h1>',
  );

  $form['globals'] = array(
    '#type' => 'fieldset',
    '#title' => t('General Settings'),
  );

  $numeric_fields = array('0' => '(None)');

  $boosts_settings = entity_score_get_boosts_settings();

  foreach (field_info_fields() as $name => $info) {

    if ($info['type'] !== 'number_float') {
      continue;
    }

    if ($info['bundles']) {
      $bundles = implode(', ', call_user_func_array('array_merge', $info['bundles']));
    }
    else {
      $bundles = array();
    }

    $title = $name;

    if ($bundles) {
      $title .= ' (' . $bundles . ')';
    }

    $numeric_fields[$name] = $title;
  }

  $form['globals']['entity_score_score_field_name'] = array(
    '#type' => 'select',
    '#title' => t('Field used to store entity score'),
    '#description' => t('Field must be of type <strong>Float</strong>. After selecting field please <strong>save configuration</strong> to see supported fields only.'),
    '#options' => $numeric_fields,
    '#default_value' => variable_get('entity_score_score_field_name', ''),
  );

  $form['globals']['entity_score_score_field_hide'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide score field'),
    '#description' => t('Hides score field when displaying entity and in add/edit forms.'),
  );

  $score_field_name    = variable_get('entity_score_score_field_name', '');
  $score_field_indexes = array();

  if (!empty ($score_field_name)) {
    $score_field_is_indexed = FALSE;

    foreach (search_api_index_load_multiple (FALSE) as $index) {
      if (!$index->enabled) {
        continue;
      }

      $indexed_fields = $index->options['fields'];

      if (isset($indexed_fields[$score_field_name])) {
        $score_field_is_indexed = TRUE;
        $score_field_indexes[$index->machine_name] = $index->name;
        break;
      }
    }

    if (!$score_field_is_indexed) {
      drupal_set_message(t("Please add selected field to !indexes for which you need boost calculation (index(es) must be enabled)", array(
        '!indexes' => l(t('Search API index(es)'), 'admin/config/search/search_api')
      )), 'warning');
    }
    else {
      $form['globals'][] = array(
        '#markup' => t('Score field indexed in:'),
        '#prefix' => '<label>',
        '#suffix' => '</label>',
      );

      $form['globals']['score_field_indexes'] = array(
        '#markup' => t(''),
        '#prefix' => '<ul>',
        '#suffix' => '</li>',
      );

      foreach ($score_field_indexes as $machine_name => $name) {
        $form['globals']['score_field_indexes'][] = array(
          '#markup' => l($name, 'admin/config/search/search_api/index/' . $machine_name . '/fields'),
          '#prefix' => '<li>',
          '#suffix' => '</li>',
        );
      }

    }
  }

  $form['text_boosts'] = array(
    '#markup' => t('Boosts'),
    '#prefix' => '<h1>',
    '#suffix' => '</h1>',
  );

  $header = array(
    'enabled' => array(
      'data' => t('Enabled'),
      'width' => '30px',
      'align' => 'center',
    ),
    'field_title' => array(
      'data' => t('Field'),
      'width' => '150px',
    ),
    'boost_title' => array(
      'data' => t('Boost method'),
    ),
    'op' => array(
      'data' => t('Operation / Settings'),
      'width' => '120px',
    ),
    'value' => array(
      'data' => t('Value'),
      'width' => '100px',
    ),
  );

  drupal_add_library('system', 'drupal.collapse');

  $boost_operations = array(
    ENTITY_SCORE_BOOST_OP_ADD_EACH => t('Add value for each occurence (default)'),
    ENTITY_SCORE_BOOST_OP_ADD_ONCE => t('Add value only once if there is any occurence'),
    ENTITY_SCORE_BOOST_OP_MUL_ONCE => t('Multiply final boost by value only once if there is any occurence'),
    ENTITY_SCORE_BOOST_OP_MUL_EACH => t('Multiply final boost by number of occurencies and value'),
    ENTITY_SCORE_BOOST_OP_ADD_DIV_BY_ALL => t('Add division of value by number of occurencies'),
    ENTITY_SCORE_BOOST_OP_MUL_DIV_BY_ALL => t('Multiply final boost by division of value by number of occurencies'),
  );

  $boost_callback_operations = array(
    ENTITY_SCORE_BOOST_OP_CALLBACK => t('Leave final score computation in hands of boost callback function'),
  );

  $boosts_list = entity_score_entity_score_boosts_list();

  foreach ($boosts_list as $group_name => $group) {

    $form['groups'][$group_name] = array(
      '#type' => 'fieldset',
      '#title' => check_plain($group['title']),
      '#attributes' => array(
        'class' => array(
          'collapsible',
        ),
      ),
    );

    $rows = array();

    foreach ($group['boosts'] as $boost_name => $boost) {

      $boost_settings = isset($boosts_settings[$group_name][$boost_name]) ? $boosts_settings[$group_name][$boost_name] : array('enabled' => FALSE, 'value' => '', 'op' => 'add');

      $is_enabled    = $boost_settings['enabled'];
      $boost_value   = isset($boost_settings['value']) ? $boost_settings['value'] : 0;

      $enabled_field = array(
        '#title' => '',
        '#type' => 'checkbox',
        '#name' => 'entity_score_' . $group_name . '_' . $boost_name . '_cfg_enabled',
        '#checked' => $is_enabled,
        '#attributes' => array(
          'class' => array('groups-boost-enabled'),
        ),
      );

      $boost_field = array(
        '#title' => '',
        '#type' => 'textfield',
        '#name' => 'entity_score_' . $group_name . '_' . $boost_name . '_cfg_value',
        '#size' => 4,
        '#value' => $boost_value,
      );

      if (isset($boost['operations'])) {
        $this_boost_operations = $boost['operations'];
      }
      else {
        $this_boost_operations = $boost['type'] === ENTITY_SCORE_BOOST_TYPE_CALLBACK ? $boost_callback_operations : $boost_operations;
      }

      if (!empty($this_boost_operations)) {
        $boost_operation = array(
          '#title' => '',
          '#type' => 'select',
          '#name' => 'entity_score_' . $group_name . '_' . $boost_name . '_cfg_op',
          '#value' => isset($boost_settings['op']) ? $boost_settings['op'] : 'add',
          '#options' => $this_boost_operations,
        );
      }
      else {
        $boost_operation = NULL;
      }

      $boost_title = $boost['boost_title'];

      if (isset($boost['description'])) {
        $boost_title .= '<div class="description">' . $boost['description'] . '</div>';
      }

      if (!empty($boost['features'])) {
        $boost_title .= '<div class="description"><ul><li>' . implode('</li><li>', $boost['features']) . '</li></ul></div>';
      }

      // Custom boost settings in HTML.
      $boost_settings_html = '';

      if (!empty($boost['settings'])) {
        $boost_field = '';

        foreach ($boost['settings'] as $name => $widget) {

          $var_name         = 'entity_score_' . $group_name . '_' . $boost_name . '_cfg_' . $name;
          $default_value    = isset($widget['#default_value']) ? $widget['#default_value'] : '';

          $widget['#name']  = $var_name;
          $widget['#value'] = isset($boost_settings[$name]) ? $boost_settings[$name] : NULL;

          $boost_settings_html .= drupal_render($widget);
        }
      }

      $boosts_settings_fieldset = array(
        '#type' => 'fieldset',
        '#attributes' => array('class' => array('collapsible', 'collapsed')),
        '#collapsed' => FALSE,
        '#collapsible' => TRUE,
        '#title' => t('Settings'),
        0 => array('#markup' => $boost_settings_html),
      );

      $rows[] = array(
        'enabled' => drupal_render($enabled_field),
        'field_title' => $boost['field_title'],
        'boost_title' => $boost_title . ($boost_settings_html !== '' ? ('<div>' . drupal_render($boosts_settings_fieldset) . '</div>') : ''),
        'op' => drupal_render($boost_operation),
        'boost' => drupal_render($boost_field),
      );
    }

    $form['groups'][$group_name]['enabled'] = array(
      '#title' => 'Enabled',
      '#type' => 'checkbox',
      '#attributes' => array(
        'class' => array('groups-enable-all-boosts'),
      ),
    );

    $form['groups'][$group_name]['boosts'] = array(
      '#markup' => theme('table', array('header' => $header, 'rows' => $rows)),
      '#prefix' => '<div>',
      '#suffix' => '<div>',
    );
  }

  if (empty($boosts_list)) {
    $form['please_select_score_field'] = array(
      '#markup' => t('Please select score field and save the configuration to see available boosts.'),
      '#prefix' => '<h3>',
      '#suffix' => '<h3>',
    );
  }

  $form['#submit'][] = 'entity_score_settings_form_submit';

  return system_settings_form($form);
}

/**
 * Form submission handler for entity_score_settings_form().
 *
 * @see entity_score_settings_form()
 */
function entity_score_settings_form_submit($form, &$form_state) {

  $boosts_configs = array();

  // Disabling all boosts initially.
  foreach (entity_score_entity_score_boosts_list() as $group_name => $group) {
    foreach ($group['boosts'] as $boost_name => $boost) {
      $boosts_configs[$group_name][$boost_name]  = array('enabled' => FALSE);
    }
  }

  foreach (entity_score_entity_score_boosts_list() as $group_name => $group) {
    foreach ($group['boosts'] as $boost_name => $boost) {
      foreach ($form_state['input'] as $key => $value) {
        $cfg_prefix = 'entity_score_' . $group_name . '_' . $boost_name . '_cfg_';
        if (strpos($key, $cfg_prefix) === 0)
        {
          $cfg_postfix   = substr($key, strlen($cfg_prefix));
          $cfg_container = &$boosts_configs[$group_name][$boost_name];

          foreach (explode('|', $cfg_postfix) as $key) {
            $cfg_container = &$cfg_container[$key];
          }

          $cfg_container = $value;

          unset($cfg_container);
        }
      }
    }
  }

  variable_set('entity_score_boosts_configs', $boosts_configs);

  $score_field_name    = $form_state['input']['entity_score_score_field_name'];
  $score_field_info    = field_info_field($score_field_name);
  $score_field_bundles = $score_field_info['bundles'];

  variable_set('entity_score_enabled_bundles', $score_field_bundles);
}
