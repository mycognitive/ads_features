<?php
/**
 * @file
 * ads_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ads_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'categories_grouped';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Ads Categories - Grouped';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
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
    'categories' => 'categories',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw_1']['id'] = 'tid_raw_1';
  $handler->display->display_options['filters']['tid_raw_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_1']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_1']['relationship'] = 'parent_1';
  $handler->display->display_options['filters']['tid_raw_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['tid_raw_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid_raw']['operator'] = 'empty';
  $handler->display->display_options['filters']['tid_raw']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['categories_grouped'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Parent'),
    t('Parent of Parent'),
    t('Block'),
  );
  $export['categories_grouped'] = $view;

  $view = new view();
  $view->name = 'fivestar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fivestar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular adverts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Fivestar Rating (field_fivestar_rating:rating) */
  $handler->display->display_options['sorts']['field_fivestar_rating_rating']['id'] = 'field_fivestar_rating_rating';
  $handler->display->display_options['sorts']['field_fivestar_rating_rating']['table'] = 'field_data_field_fivestar_rating';
  $handler->display->display_options['sorts']['field_fivestar_rating_rating']['field'] = 'field_fivestar_rating_rating';
  $handler->display->display_options['sorts']['field_fivestar_rating_rating']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_fivestar_rating']['id'] = 'field_fivestar_rating';
  $handler->display->display_options['sorts']['field_fivestar_rating']['table'] = 'field_data_field_fivestar';
  $handler->display->display_options['sorts']['field_fivestar_rating']['field'] = 'field_fivestar_rating';
  $handler->display->display_options['sorts']['field_fivestar_rating']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_fivestar_rating']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_fivestar_rating']['expose']['label'] = 'Sort Score';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Fivestar Rating (field_fivestar_rating:rating) */
  $handler->display->display_options['filters']['field_fivestar_rating_rating']['id'] = 'field_fivestar_rating_rating';
  $handler->display->display_options['filters']['field_fivestar_rating_rating']['table'] = 'field_data_field_fivestar_rating';
  $handler->display->display_options['filters']['field_fivestar_rating_rating']['field'] = 'field_fivestar_rating_rating';
  $handler->display->display_options['filters']['field_fivestar_rating_rating']['operator'] = '>=';
  $handler->display->display_options['filters']['field_fivestar_rating_rating']['value']['value'] = '1';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_fivestar_rating']['id'] = 'field_fivestar_rating';
  $handler->display->display_options['filters']['field_fivestar_rating']['table'] = 'field_data_field_fivestar';
  $handler->display->display_options['filters']['field_fivestar_rating']['field'] = 'field_fivestar_rating';
  $handler->display->display_options['filters']['field_fivestar_rating']['operator'] = '>=';
  $handler->display->display_options['filters']['field_fivestar_rating']['value'] = array(
    'value' => '1',
  );

  /* Display: Popular adverts */
  $handler = $view->new_display('block', 'Popular adverts', 'block');
  $translatables['fivestar'] = array(
    t('Master'),
    t('Popular adverts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sort Score'),
  );
  $export['fivestar'] = $view;

  return $export;
}
