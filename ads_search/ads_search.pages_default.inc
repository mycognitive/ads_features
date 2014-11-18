<?php
/**
 * @file
 * ads_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ads_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'refine_your_search';
  $page->task = 'page';
  $page->admin_title = 'Refine your search';
  $page->admin_description = '';
  $page->path = 'panel-pages/refine-your-search';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_refine_your_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'refine_your_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '461c8682-9a32-463a-96e9-d4c4ae5062fa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7432b200-ff6a-46ba-9f04-79430ecd1945';
    $pane->panel = 'center';
    $pane->type = 'ads_title';
    $pane->subtype = 'ads_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tag' => 'h2',
      'context' => 'empty',
      'override_title' => 1,
      'override_title_text' => 'Refine your search',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7432b200-ff6a-46ba-9f04-79430ecd1945';
    $display->content['new-7432b200-ff6a-46ba-9f04-79430ecd1945'] = $pane;
    $display->panels['center'][0] = 'new-7432b200-ff6a-46ba-9f04-79430ecd1945';
    $pane = new stdClass();
    $pane->pid = 'new-b8f3e1da-fed7-49e0-842e-c64a37163b07';
    $pane->panel = 'center';
    $pane->type = 'ads_placeholder';
    $pane->subtype = 'ads_placeholder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'shape' => 'rows',
      'size' => 'huge',
      'override_title' => 1,
      'override_title_text' => 'Advert Content Types\' Filters',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b8f3e1da-fed7-49e0-842e-c64a37163b07';
    $display->content['new-b8f3e1da-fed7-49e0-842e-c64a37163b07'] = $pane;
    $display->panels['center'][1] = 'new-b8f3e1da-fed7-49e0-842e-c64a37163b07';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-7432b200-ff6a-46ba-9f04-79430ecd1945';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['refine_your_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_filters';
  $page->task = 'page';
  $page->admin_title = 'Search Filters (On Home Page)';
  $page->admin_description = '';
  $page->path = 'panel-pages/search-filters-home-page';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_filters_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_filters';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f4e22e47-7f9e-487c-ae50-d835a21c9821';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c22e3d7e-ba4d-4667-bb06-0b3b170baa39';
    $pane->panel = 'center';
    $pane->type = 'ads_title';
    $pane->subtype = 'ads_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'tag' => 'h1',
      'context' => 'empty',
      'override_title' => 1,
      'override_title_text' => 'Search Jobs',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c22e3d7e-ba4d-4667-bb06-0b3b170baa39';
    $display->content['new-c22e3d7e-ba4d-4667-bb06-0b3b170baa39'] = $pane;
    $display->panels['center'][0] = 'new-c22e3d7e-ba4d-4667-bb06-0b3b170baa39';
    $pane = new stdClass();
    $pane->pid = 'new-ebb38cda-7fa4-4a54-9ab5-c43581c9b810';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-892bf6e56abdd4696e4aeadf07055edb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 0,
      'override_title' => 1,
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
    $pane->uuid = 'ebb38cda-7fa4-4a54-9ab5-c43581c9b810';
    $display->content['new-ebb38cda-7fa4-4a54-9ab5-c43581c9b810'] = $pane;
    $display->panels['center'][1] = 'new-ebb38cda-7fa4-4a54-9ab5-c43581c9b810';
    $pane = new stdClass();
    $pane->pid = 'new-025e96a6-6bdf-491d-8025-ded0a542d2f5';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-MkAg0o0zD2xtOTg6OF3FtfffXC6lCe0p';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '025e96a6-6bdf-491d-8025-ded0a542d2f5';
    $display->content['new-025e96a6-6bdf-491d-8025-ded0a542d2f5'] = $pane;
    $display->panels['center'][2] = 'new-025e96a6-6bdf-491d-8025-ded0a542d2f5';
    $pane = new stdClass();
    $pane->pid = 'new-c9e7a09d-ff3f-4485-b788-e12c55fcecd9';
    $pane->panel = 'center';
    $pane->type = 'ads_placeholder';
    $pane->subtype = 'ads_placeholder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'shape' => 'rows',
      'size' => 'medium',
      'override_title' => 1,
      'override_title_text' => 'Someting here',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c9e7a09d-ff3f-4485-b788-e12c55fcecd9';
    $display->content['new-c9e7a09d-ff3f-4485-b788-e12c55fcecd9'] = $pane;
    $display->panels['center'][3] = 'new-c9e7a09d-ff3f-4485-b788-e12c55fcecd9';
    $pane = new stdClass();
    $pane->pid = 'new-1ddc4c73-47c9-4871-90c8-eff5986db8d2';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-SBanNTe1UW8gM1VWyEREptvK02VzIJzN';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1ddc4c73-47c9-4871-90c8-eff5986db8d2';
    $display->content['new-1ddc4c73-47c9-4871-90c8-eff5986db8d2'] = $pane;
    $display->panels['center'][4] = 'new-1ddc4c73-47c9-4871-90c8-eff5986db8d2';
    $pane = new stdClass();
    $pane->pid = 'new-9953ef61-20b3-4449-b816-ceae38045dec';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ZGjhzLnk6NO4nm0c33F1ZVHYUybad190';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9953ef61-20b3-4449-b816-ceae38045dec';
    $display->content['new-9953ef61-20b3-4449-b816-ceae38045dec'] = $pane;
    $display->panels['center'][5] = 'new-9953ef61-20b3-4449-b816-ceae38045dec';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_filters'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_filters_top_bar';
  $page->task = 'page';
  $page->admin_title = 'Search Filters (Top Bar on Search Results)';
  $page->admin_description = '';
  $page->path = 'panel-pages/search-filters-top-bar';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_filters_top_bar_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_filters_top_bar';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '75ef3379-3c98-4fa4-870f-e1da2bb28ff7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a0f7f941-08e0-45f1-b618-d6818c063e9e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-892bf6e56abdd4696e4aeadf07055edb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a0f7f941-08e0-45f1-b618-d6818c063e9e';
    $display->content['new-a0f7f941-08e0-45f1-b618-d6818c063e9e'] = $pane;
    $display->panels['center'][0] = 'new-a0f7f941-08e0-45f1-b618-d6818c063e9e';
    $pane = new stdClass();
    $pane->pid = 'new-adcf082d-71f9-443a-b596-c5f5ac6acc02';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-MkAg0o0zD2xtOTg6OF3FtfffXC6lCe0p';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'adcf082d-71f9-443a-b596-c5f5ac6acc02';
    $display->content['new-adcf082d-71f9-443a-b596-c5f5ac6acc02'] = $pane;
    $display->panels['center'][1] = 'new-adcf082d-71f9-443a-b596-c5f5ac6acc02';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_filters_top_bar'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_results';
  $page->task = 'page';
  $page->admin_title = 'Search Results';
  $page->admin_description = '';
  $page->path = 'search/results';
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
  $handler->name = 'page_search_results_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_results';
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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
          2 => 7,
        ),
        'parent' => 'canvas',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '20.010665662839575',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => 'search-results-left-column',
      ),
      4 => array(
        'type' => 'column',
        'width' => '79.98933433716043',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => 'search-results-right-column',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '3',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '4',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'default',
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage';
  $display->uuid = 'f3ae8a90-b1f7-4356-95aa-31380c91188c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d1a7dcff-4fed-4bd9-814e-a123a9f350e5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-JqO77EHSQZejqY86mMo1IC2r3Sk4Z8pS';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd1a7dcff-4fed-4bd9-814e-a123a9f350e5';
    $display->content['new-d1a7dcff-4fed-4bd9-814e-a123a9f350e5'] = $pane;
    $display->panels['left'][0] = 'new-d1a7dcff-4fed-4bd9-814e-a123a9f350e5';
    $pane = new stdClass();
    $pane->pid = 'new-31fae27d-0208-4cf1-9a97-e25f9e8bf909';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-yVUnk1RU7PXcmaFrReY5Wb5x9TAvG6hd';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '31fae27d-0208-4cf1-9a97-e25f9e8bf909';
    $display->content['new-31fae27d-0208-4cf1-9a97-e25f9e8bf909'] = $pane;
    $display->panels['left'][1] = 'new-31fae27d-0208-4cf1-9a97-e25f9e8bf909';
    $pane = new stdClass();
    $pane->pid = 'new-de3bcae0-fa82-4d8c-8fc6-e98ca37c033c';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-46tgU9JMiTyvBDk1VJn9mdzx1mySNZT1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Categories',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'de3bcae0-fa82-4d8c-8fc6-e98ca37c033c';
    $display->content['new-de3bcae0-fa82-4d8c-8fc6-e98ca37c033c'] = $pane;
    $display->panels['left'][2] = 'new-de3bcae0-fa82-4d8c-8fc6-e98ca37c033c';
    $pane = new stdClass();
    $pane->pid = 'new-776e9559-46fd-45d4-8a07-d65ec2b75023';
    $pane->panel = 'left';
    $pane->type = 'ads_include_page';
    $pane->subtype = 'ads_include_page';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'page_name' => 'refine_your_search',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '776e9559-46fd-45d4-8a07-d65ec2b75023';
    $display->content['new-776e9559-46fd-45d4-8a07-d65ec2b75023'] = $pane;
    $display->panels['left'][3] = 'new-776e9559-46fd-45d4-8a07-d65ec2b75023';
    $pane = new stdClass();
    $pane->pid = 'new-b704a78c-2da9-4df5-9f11-6333acad2810';
    $pane->panel = 'left';
    $pane->type = 'ads_placeholder';
    $pane->subtype = 'ads_placeholder';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'shape' => 'rows',
      'size' => 'medium',
      'override_title' => 1,
      'override_title_text' => 'All categories',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b704a78c-2da9-4df5-9f11-6333acad2810';
    $display->content['new-b704a78c-2da9-4df5-9f11-6333acad2810'] = $pane;
    $display->panels['left'][4] = 'new-b704a78c-2da9-4df5-9f11-6333acad2810';
    $pane = new stdClass();
    $pane->pid = 'new-4ac02b88-e39e-41a0-84cb-7252724e09d2';
    $pane->panel = 'right';
    $pane->type = 'ads_items_per_page';
    $pane->subtype = 'ads_items_per_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view' => 'ads_search_results',
      'override_title' => 1,
      'override_title_text' => 'Adverts per page',
      'view_name' => 'ads_search_results',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ac02b88-e39e-41a0-84cb-7252724e09d2';
    $display->content['new-4ac02b88-e39e-41a0-84cb-7252724e09d2'] = $pane;
    $display->panels['right'][0] = 'new-4ac02b88-e39e-41a0-84cb-7252724e09d2';
    $pane = new stdClass();
    $pane->pid = 'new-67c4ca71-73c8-48f4-9f4e-cdda3d22cd4c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ads_search_results-search_results_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'search/results',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67c4ca71-73c8-48f4-9f4e-cdda3d22cd4c';
    $display->content['new-67c4ca71-73c8-48f4-9f4e-cdda3d22cd4c'] = $pane;
    $display->panels['right'][1] = 'new-67c4ca71-73c8-48f4-9f4e-cdda3d22cd4c';
    $pane = new stdClass();
    $pane->pid = 'new-aa2205ff-ceda-4088-b9ed-365f7ade6698';
    $pane->panel = 'top';
    $pane->type = 'ads_include_page';
    $pane->subtype = 'ads_include_page';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'page_name' => 'search_filters_top_bar',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa2205ff-ceda-4088-b9ed-365f7ade6698';
    $display->content['new-aa2205ff-ceda-4088-b9ed-365f7ade6698'] = $pane;
    $display->panels['top'][0] = 'new-aa2205ff-ceda-4088-b9ed-365f7ade6698';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_results'] = $page;

  return $pages;

}
