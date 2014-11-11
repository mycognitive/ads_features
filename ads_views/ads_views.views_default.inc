<?php
/**
 * @file
 * ads_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ads_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ads_categories';
  $view->description = '';
  $view->tag = 'ads_features';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'categories' => 'categories',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['ads_categories'] = array(
    t('Master'),
    t('Categories'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['ads_categories'] = $view;

  $view = new view();
  $view->name = 'ads_selected';
  $view->description = 'Provide blocks for showing most recent, popular and similar adverts.';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ads_adverts';
  $view->human_name = 'ADS Selected';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent';
  $handler->display->display_options['css_class'] = 'view-4-cols';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_ad_image']['id'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['field_ad_image']['field'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['label'] = '';
  $handler->display->display_options['fields']['field_ad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_image']['element_wrapper_class'] = 'view-image';
  $handler->display->display_options['fields']['field_ad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ad_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ad_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ad_image']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_ad_image']['separator'] = '';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'view-node2';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More';
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Recent */
  $handler = $view->new_display('block', 'Recent', 'block');
  $handler->display->display_options['display_description'] = 'Display most recent adverts.';
  $translatables['ads_selected'] = array(
    t('Master'),
    t('Recent'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('More'),
    t('Display most recent adverts.'),
  );
  $export['ads_selected'] = $view;

  return $export;
}
