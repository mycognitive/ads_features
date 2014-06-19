<?php
/**
 * @file
 * Admin functions for massive module.
 */

/**
 * Generates form to configure interface.
 */
function ads_score_settings_form() {

  ads_theme_add_js(ads_theme_find('ads_score', 'js', 'ads_score.js', ADS_THEME_FIND_JS));

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

  foreach(field_info_fields() as $name => $info) {

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

  $form['globals']['ads_score_score_field_name'] = array(
    '#type' => 'select',
    '#title' => t('Field used to store final score of the entity'),
    '#default_value' => variable_get('ads_score_score_field_name', ''),
    '#description' => t('Field must be of type <strong>Float</strong>. After selecting field please save configuration to see supported fields only.'),
    '#options' => $numeric_fields,
  );

  $form['globals']['ads_score_score_field_hide'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide score field'),
    '#default_value' => (bool)variable_get('ads_score_score_field_hide', FALSE),
    '#description' => t('Hides score field when displaying entity and in add/edit forms.'),
  );

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
      'data' => t('Operation'),
      'width' => '120px',
    ),
    'value' => array(
      'data' => t('Value'),
      'width' => '100px',
    ),
    'default_value' => array(
      'data' => t('Default'),
      'width' => '100px',
    ),
  );

  drupal_add_library('system', 'drupal.collapse');

  $boost_operations = array (
    ADS_SCORE_BOOST_OP_ADD_EACH => t('Add value for each occurence (default)'),
    ADS_SCORE_BOOST_OP_ADD_ONCE => t('Add value only once if there is any occurence'),
    ADS_SCORE_BOOST_OP_MUL_ONCE => t('Multiply final boost by value only once if there is any occurence'),
    ADS_SCORE_BOOST_OP_MUL_EACH => t('Multiply final boost by number of occurencies and value'),
  );

  $boost_callback_operations = array (
    ADS_SCORE_BOOST_OP_CALLBACK => t('Leave final score computation in hands of boost callback function'),
  );

  foreach (ads_score_entity_score_boosts_list() as $group_name => $group) {

    $form['groups'][$group_name] = array(
      '#type' => 'fieldset',
      '#title' => $group['title'],
      '#attributes' => array (
        'class' => array(
          'collapsible'
        )
      ),
    );

    $rows = array();

    foreach ($group['boosts'] as $boost_name => $boost) {

      $is_enabled    = variable_get('ads_score_' . $group_name . '_' . $boost_name . '_enabled', FALSE);
      $default_boost = isset($boost['default_value']) ? $boost['default_value'] : 0;
      $boost_value   = variable_get('ads_score_' . $group_name . '_' . $boost_name . '_value', $default_boost);

      $enabled_field = array(
        '#title' => '',
        '#type' => 'checkbox',
        '#name' => 'ads_score_' . $group_name . '_' . $boost_name . '_enabled',
        '#checked' => $is_enabled,
        '#attributes' => array(
          'class' => array('groups-boost-enabled'),
        ),
      );

      $boost_field = array(
        '#title' => '',
        '#type' => 'textfield',
        '#name' => 'ads_score_' . $group_name . '_' . $boost_name . '_value',
        '#size' => 4,
        '#value' => $boost_value,
      );

      $boost_operation = array(
        '#title' => '',
        '#type' => 'select',
        '#name' => 'ads_score_' . $group_name . '_' . $boost_name . '_op',
        '#value' => variable_get('ads_score_' . $group_name . '_' . $boost_name . '_op', 'add'),
        '#options' => $boost['type'] === ADS_SCORE_BOOST_TYPE_CALLBACK ? $boost_callback_operations : $boost_operations,
      );

      $rows[] = array(
        'enabled' => drupal_render($enabled_field),
        'field_title' => $boost['field_title'],
        'boost_title' => $boost['boost_title'],
        'op' => drupal_render($boost_operation),
        'boost' => drupal_render($boost_field),
        'default_value' => $boost['type'] === ADS_SCORE_BOOST_TYPE_CALLBACK ? '' : $default_boost,
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

  $form['#submit'][] = 'ads_score_settings_form_submit';

  return system_settings_form($form);
}

/**
 * Form submission handler.
 */
function ads_score_settings_form_submit($form, &$form_state) {

  // Disabling all boosts initially.
  foreach (ads_score_entity_score_boosts_list() as $group_name => $group) {
    foreach ($group['boosts'] as $boost_name => $boost) {
      variable_set('ads_score_' . $group_name . '_' . $boost_name . '_enabled', FALSE);
    }
  }

  foreach ($form_state['input'] as $key => $value) {
    if (strpos($key, 'ads_score_') === 0) {
      variable_set($key, $value);
    }
  }

  $score_field_name    = $form_state['input']['ads_score_score_field_name'];
  $score_field_info    = field_info_field($score_field_name);
  $score_field_bundles = $score_field_info['bundles'];

  variable_set('ads_score_enabled_bundles', $score_field_bundles);
}
