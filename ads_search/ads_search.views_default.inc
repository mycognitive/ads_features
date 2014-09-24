<?php
/**
 * @file
 * ads_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ads_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ads_search_results';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_ads_adverts';
  $view->human_name = 'Ads Search Results';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Filters Facets';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 50, 100';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_results_item';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No adverts found.';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>Your search returned no results.</h2>
<p>Please change your keyword to search again.<br>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Indexed Node: Location */
  $handler->display->display_options['relationships']['field_ad_location']['id'] = 'field_ad_location';
  $handler->display->display_options['relationships']['field_ad_location']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['relationships']['field_ad_location']['field'] = 'field_ad_location';
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_ad_image']['id'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['field_ad_image']['field'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_image']['type'] = 'lightbox2__lightbox__ads_thumbnail_listing__large';
  $handler->display->display_options['fields']['field_ad_image']['settings'] = array(
    'image_style' => 'ads_advert_preview',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ad_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ad_image']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_ad_image']['multi_type'] = 'ol';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Price */
  $handler->display->display_options['fields']['field_ad_price']['id'] = 'field_ad_price';
  $handler->display->display_options['fields']['field_ad_price']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['field_ad_price']['field'] = 'field_ad_price';
  $handler->display->display_options['fields']['field_ad_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_price']['click_sort_column'] = 'amount';
  /* Field: Location: Name (indexed) */
  $handler->display->display_options['fields']['field_ad_location_name']['id'] = 'field_ad_location_name';
  $handler->display->display_options['fields']['field_ad_location_name']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['field_ad_location_name']['field'] = 'field_ad_location_name';
  $handler->display->display_options['fields']['field_ad_location_name']['label'] = 'Location';
  $handler->display->display_options['fields']['field_ad_location_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_location_name']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Keywords:';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'search_results_content_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['link_url'] = 'search/results';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ad_image' => 'field_ad_image',
    'title' => 'title',
    'field_ad_price' => 'field_ad_price',
    'field_ad_location_name' => 'field_ad_location_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ad_image' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ad_price' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ad_location_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['caption'] = 'Search results';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'ADS Views';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['ads_search_results'] = array(
    t('Master'),
    t('Search Filters Facets'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No adverts found.'),
    t('<h2>Your search returned no results.</h2>
<p>Please change your keyword to search again.<br>'),
    t('Location'),
    t('Image'),
    t('Title'),
    t('Price'),
    t('Updated'),
    t('Keywords:'),
    t('Content pane'),
    t('ADS Views'),
  );
  $export['ads_search_results'] = $view;

  return $export;
}
