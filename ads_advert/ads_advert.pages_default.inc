<?php
/**
 * @file
 * ads_advert.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ads_advert_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Advert View',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'advert' => 'advert',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '',
        'region_separation' => '',
        'row_separation' => '',
      ),
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 17,
          1 => 3,
          2 => 4,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 5,
          1 => 8,
        ),
        'parent' => '1',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(),
        'parent' => '1',
        'class' => '',
      ),
      5 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 10,
          1 => 9,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 16,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'simlar_adverts',
        ),
        'parent' => '5',
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 11,
          1 => 12,
        ),
        'parent' => '5',
        'class' => '',
      ),
      11 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '10',
        'children' => array(
          0 => 13,
        ),
        'class' => '',
      ),
      12 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '10',
        'children' => array(
          0 => 14,
          1 => 15,
        ),
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'picture',
        ),
        'parent' => '11',
        'class' => '',
      ),
      14 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'details',
        ),
        'parent' => '12',
        'class' => '',
      ),
      15 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'description',
        ),
        'parent' => '12',
        'class' => '',
      ),
      'picture' => array(
        'type' => 'region',
        'title' => 'Picture',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
      ),
      'details' => array(
        'type' => 'region',
        'title' => 'Details',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'class' => '',
      ),
      'description' => array(
        'type' => 'region',
        'title' => 'Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => '15',
        'class' => '',
      ),
      'simlar_adverts' => array(
        'type' => 'region',
        'title' => 'Simlar adverts',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      16 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_side',
        ),
        'parent' => '8',
        'class' => '',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'Right side',
        'width' => 100,
        'width_type' => '%',
        'parent' => '16',
        'class' => '',
      ),
      17 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 18,
        ),
        'parent' => '1',
        'class' => '',
      ),
      18 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '17',
        'children' => array(
          0 => 19,
        ),
        'class' => '',
      ),
      19 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'title',
        ),
        'parent' => '18',
        'class' => '',
      ),
      'title' => array(
        'type' => 'region',
        'title' => 'Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '19',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'picture' => NULL,
      'details' => NULL,
      'description' => NULL,
      'simlar_adverts' => NULL,
      'right_side' => NULL,
      'title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ef041a75-f17b-48a5-a4c5-f1395657e08d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cbc93b1f-7376-4a19-a768-fe3d08750fd1';
    $pane->panel = 'description';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'cbc93b1f-7376-4a19-a768-fe3d08750fd1';
    $display->content['new-cbc93b1f-7376-4a19-a768-fe3d08750fd1'] = $pane;
    $display->panels['description'][0] = 'new-cbc93b1f-7376-4a19-a768-fe3d08750fd1';
    $pane = new stdClass();
    $pane->pid = 'new-b74e6ed7-1e71-423c-a65e-3b96878f87fa';
    $pane->panel = 'details';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Date added',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b74e6ed7-1e71-423c-a65e-3b96878f87fa';
    $display->content['new-b74e6ed7-1e71-423c-a65e-3b96878f87fa'] = $pane;
    $display->panels['details'][0] = 'new-b74e6ed7-1e71-423c-a65e-3b96878f87fa';
    $pane = new stdClass();
    $pane->pid = 'new-1752bb80-2138-4f5e-ba26-51bce14967ba';
    $pane->panel = 'details';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Date last modified',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1752bb80-2138-4f5e-ba26-51bce14967ba';
    $display->content['new-1752bb80-2138-4f5e-ba26-51bce14967ba'] = $pane;
    $display->panels['details'][1] = 'new-1752bb80-2138-4f5e-ba26-51bce14967ba';
    $pane = new stdClass();
    $pane->pid = 'new-b77964f1-3898-40e6-9dbc-713a3109f79d';
    $pane->panel = 'details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'money_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Price',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b77964f1-3898-40e6-9dbc-713a3109f79d';
    $display->content['new-b77964f1-3898-40e6-9dbc-713a3109f79d'] = $pane;
    $display->panels['details'][2] = 'new-b77964f1-3898-40e6-9dbc-713a3109f79d';
    $pane = new stdClass();
    $pane->pid = 'new-5a043721-a113-4ea7-b049-17fdd432d701';
    $pane->panel = 'details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Address',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5a043721-a113-4ea7-b049-17fdd432d701';
    $display->content['new-5a043721-a113-4ea7-b049-17fdd432d701'] = $pane;
    $display->panels['details'][3] = 'new-5a043721-a113-4ea7-b049-17fdd432d701';
    $pane = new stdClass();
    $pane->pid = 'new-31ac0751-45d1-451d-bcea-56722a692266';
    $pane->panel = 'details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'shs_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'linked' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '31ac0751-45d1-451d-bcea-56722a692266';
    $display->content['new-31ac0751-45d1-451d-bcea-56722a692266'] = $pane;
    $display->panels['details'][4] = 'new-31ac0751-45d1-451d-bcea-56722a692266';
    $pane = new stdClass();
    $pane->pid = 'new-dd1559b6-a21f-43d5-8f95-b24c12a94d22';
    $pane->panel = 'details';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_link_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Website',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'dd1559b6-a21f-43d5-8f95-b24c12a94d22';
    $display->content['new-dd1559b6-a21f-43d5-8f95-b24c12a94d22'] = $pane;
    $display->panels['details'][5] = 'new-dd1559b6-a21f-43d5-8f95-b24c12a94d22';
    $pane = new stdClass();
    $pane->pid = 'new-5bb2e88c-9e6d-4616-8bbd-c1662565fdf9';
    $pane->panel = 'picture';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'lightbox2__lightbox__ads_advert_preview__original',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '5bb2e88c-9e6d-4616-8bbd-c1662565fdf9';
    $display->content['new-5bb2e88c-9e6d-4616-8bbd-c1662565fdf9'] = $pane;
    $display->panels['picture'][0] = 'new-5bb2e88c-9e6d-4616-8bbd-c1662565fdf9';
    $pane = new stdClass();
    $pane->pid = 'new-7e914395-96d4-4070-b199-f8a37b8e5352';
    $pane->panel = 'right_side';
    $pane->type = 'ads_placeholder';
    $pane->subtype = 'ads_placeholder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'shape' => 'rows',
      'size' => 'big',
      'override_title' => 1,
      'override_title_text' => 'Contact form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e914395-96d4-4070-b199-f8a37b8e5352';
    $display->content['new-7e914395-96d4-4070-b199-f8a37b8e5352'] = $pane;
    $display->panels['right_side'][0] = 'new-7e914395-96d4-4070-b199-f8a37b8e5352';
    $pane = new stdClass();
    $pane->pid = 'new-d100e5f8-ef33-4683-ba70-f96958e8d409';
    $pane->panel = 'simlar_adverts';
    $pane->type = 'ads_placeholder';
    $pane->subtype = 'ads_placeholder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'shape' => 'rows',
      'size' => 'medium',
      'override_title' => 1,
      'override_title_text' => 'Similar adverts',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd100e5f8-ef33-4683-ba70-f96958e8d409';
    $display->content['new-d100e5f8-ef33-4683-ba70-f96958e8d409'] = $pane;
    $display->panels['simlar_adverts'][0] = 'new-d100e5f8-ef33-4683-ba70-f96958e8d409';
    $pane = new stdClass();
    $pane->pid = 'new-8b4a48b0-295d-401e-aef7-0424868019ab';
    $pane->panel = 'title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '8b4a48b0-295d-401e-aef7-0424868019ab';
    $display->content['new-8b4a48b0-295d-401e-aef7-0424868019ab'] = $pane;
    $display->panels['title'][0] = 'new-8b4a48b0-295d-401e-aef7-0424868019ab';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
