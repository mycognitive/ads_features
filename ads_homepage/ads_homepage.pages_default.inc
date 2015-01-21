<?php
/**
 * @file
 * ads_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ads_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'homepage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'left' => array(
        'corner_location' => 'panel',
      ),
      'right' => array(
        'corner_location' => 'panel',
      ),
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'rounded_corners',
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'right' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage';
  $display->uuid = 'de580bcd-36f3-4bb9-87f8-e07189da12b0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a5277dd-2a96-4fca-85ec-aee3cd77fb1f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Browse by Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a5277dd-2a96-4fca-85ec-aee3cd77fb1f';
    $display->content['new-6a5277dd-2a96-4fca-85ec-aee3cd77fb1f'] = $pane;
    $display->panels['left'][0] = 'new-6a5277dd-2a96-4fca-85ec-aee3cd77fb1f';
    $pane = new stdClass();
    $pane->pid = 'new-7574a09f-b736-423a-be9f-be881f7947b1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-b4951aacba0a9fb24bb170bd4f6c7a7e';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Browse by location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7574a09f-b736-423a-be9f-be881f7947b1';
    $display->content['new-7574a09f-b736-423a-be9f-be881f7947b1'] = $pane;
    $display->panels['left'][1] = 'new-7574a09f-b736-423a-be9f-be881f7947b1';
    $pane = new stdClass();
    $pane->pid = 'new-2ab2f82c-ceab-4e9b-908b-226c8e111017';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-categories_grouped-block';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Browse by category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ab2f82c-ceab-4e9b-908b-226c8e111017';
    $display->content['new-2ab2f82c-ceab-4e9b-908b-226c8e111017'] = $pane;
    $display->panels['right'][0] = 'new-2ab2f82c-ceab-4e9b-908b-226c8e111017';
    $pane = new stdClass();
    $pane->pid = 'new-6bde77de-d2f8-4b76-9123-29b231b37ef2';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'fivestar';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6bde77de-d2f8-4b76-9123-29b231b37ef2';
    $display->content['new-6bde77de-d2f8-4b76-9123-29b231b37ef2'] = $pane;
    $display->panels['right'][1] = 'new-6bde77de-d2f8-4b76-9123-29b231b37ef2';
    $pane = new stdClass();
    $pane->pid = 'new-0504a4a2-45f3-4bac-9f36-7010e5c33669';
    $pane->panel = 'top';
    $pane->type = 'ads_include_page';
    $pane->subtype = 'ads_include_page';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'page_name' => 'search_filters_top_bar',
      'override_title' => 1,
      'override_title_text' => 'Search',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0504a4a2-45f3-4bac-9f36-7010e5c33669';
    $display->content['new-0504a4a2-45f3-4bac-9f36-7010e5c33669'] = $pane;
    $display->panels['top'][0] = 'new-0504a4a2-45f3-4bac-9f36-7010e5c33669';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2ab2f82c-ceab-4e9b-908b-226c8e111017';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
