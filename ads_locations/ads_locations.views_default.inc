<?php
/**
 * @file
 * ads_locations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ads_locations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ads_locations_grouped';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Ads Locations - Grouped';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'name_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'views-display-columns';
  $handler->display->display_options['style_options']['class'] = 'views-display-columns';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list views-display-columns masonry-item';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_ads_cat_icon_1' => 'field_ads_cat_icon_1',
    'field_ads_cat_icon' => 'field_ads_cat_icon',
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['label'] = 'Parent of Parent';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_2']['id'] = 'parent_2';
  $handler->display->display_options['relationships']['parent_2']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_2']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_2']['relationship'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_2']['label'] = 'Parent of Parent of Parent';
  /* Relationship: Taxonomy term: Content using Location */
  $handler->display->display_options['relationships']['reverse_field_ad_location_node']['id'] = 'reverse_field_ad_location_node';
  $handler->display->display_options['relationships']['reverse_field_ad_location_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_ad_location_node']['field'] = 'reverse_field_ad_location_node';
  $handler->display->display_options['relationships']['reverse_field_ad_location_node']['required'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_ad_location_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Category Icon */
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['id'] = 'field_ads_cat_icon_1';
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['table'] = 'field_data_field_ads_cat_icon';
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['field'] = 'field_ads_cat_icon';
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['label'] = '';
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ads_cat_icon_1']['settings'] = array(
    'image_style' => 'ads_menu_category_thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Category Icon */
  $handler->display->display_options['fields']['field_ads_cat_icon']['id'] = 'field_ads_cat_icon';
  $handler->display->display_options['fields']['field_ads_cat_icon']['table'] = 'field_data_field_ads_cat_icon';
  $handler->display->display_options['fields']['field_ads_cat_icon']['field'] = 'field_ads_cat_icon';
  $handler->display->display_options['fields']['field_ads_cat_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ads_cat_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ads_cat_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ads_cat_icon']['settings'] = array(
    'image_style' => 'ads_menu_category_thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name_2']['label'] = '';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'locations' => 'locations',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'parent_1';
  $handler->display->display_options['filters']['tid_raw']['operator'] = 'not empty';
  /* Filter criterion: Content: Location (field_ad_location) */
  $handler->display->display_options['filters']['field_ad_location_tid']['id'] = 'field_ad_location_tid';
  $handler->display->display_options['filters']['field_ad_location_tid']['table'] = 'field_data_field_ad_location';
  $handler->display->display_options['filters']['field_ad_location_tid']['field'] = 'field_ad_location_tid';
  $handler->display->display_options['filters']['field_ad_location_tid']['relationship'] = 'reverse_field_ad_location_node';
  $handler->display->display_options['filters']['field_ad_location_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ad_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_ad_location_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_location_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_ad_location_tid']['vocabulary'] = 'locations';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'ads_locations_sel_list');
  $translatables['ads_locations_grouped'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Parent'),
    t('Parent of Parent'),
    t('Parent of Parent of Parent'),
    t('field_ad_location'),
    t('[name]'),
    t('Block'),
  );
  $export['ads_locations_grouped'] = $view;

  return $export;
}
