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
  $handler->display->display_options['title'] = 'Search results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
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
<p>Please use the <b>keyword</b> and <b>location</b> search on the left to search again.<br>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
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
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['id'] = 'search_api_views_fulltext_1';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['table'] = 'search_api_index_ads_adverts';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['operator_id'] = 'search_api_views_fulltext_1_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['label'] = 'Location:';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['operator'] = 'search_api_views_fulltext_1_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Search results */
  $handler = $view->new_display('page', 'Search results', 'ads_search_results');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search/results';
  $export['ads_search_results'] = $view;

  return $export;
}
