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
  $display->uuid = 'a566461a-4c65-4b68-bd5a-b74a1a40d9c4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ca64525-6357-4fa9-a238-6f5fb761ee5a';
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
    $pane->uuid = '5ca64525-6357-4fa9-a238-6f5fb761ee5a';
    $display->content['new-5ca64525-6357-4fa9-a238-6f5fb761ee5a'] = $pane;
    $display->panels['description'][0] = 'new-5ca64525-6357-4fa9-a238-6f5fb761ee5a';
    $pane = new stdClass();
    $pane->pid = 'new-494ac1a4-68b6-4cb6-a283-05c1421b361c';
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
    $pane->uuid = '494ac1a4-68b6-4cb6-a283-05c1421b361c';
    $display->content['new-494ac1a4-68b6-4cb6-a283-05c1421b361c'] = $pane;
    $display->panels['details'][0] = 'new-494ac1a4-68b6-4cb6-a283-05c1421b361c';
    $pane = new stdClass();
    $pane->pid = 'new-41cfeb4f-bab0-4a8e-ae3a-a4b51abb9d0b';
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
    $pane->uuid = '41cfeb4f-bab0-4a8e-ae3a-a4b51abb9d0b';
    $display->content['new-41cfeb4f-bab0-4a8e-ae3a-a4b51abb9d0b'] = $pane;
    $display->panels['details'][1] = 'new-41cfeb4f-bab0-4a8e-ae3a-a4b51abb9d0b';
    $pane = new stdClass();
    $pane->pid = 'new-7c9b9b5e-85f1-44e4-a23c-dcebece69053';
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
    $pane->uuid = '7c9b9b5e-85f1-44e4-a23c-dcebece69053';
    $display->content['new-7c9b9b5e-85f1-44e4-a23c-dcebece69053'] = $pane;
    $display->panels['details'][2] = 'new-7c9b9b5e-85f1-44e4-a23c-dcebece69053';
    $pane = new stdClass();
    $pane->pid = 'new-26513784-6ac5-4042-9d09-1142c8a08830';
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
    $pane->uuid = '26513784-6ac5-4042-9d09-1142c8a08830';
    $display->content['new-26513784-6ac5-4042-9d09-1142c8a08830'] = $pane;
    $display->panels['details'][3] = 'new-26513784-6ac5-4042-9d09-1142c8a08830';
    $pane = new stdClass();
    $pane->pid = 'new-84534a46-8db7-4b50-aa29-8fd7ae0f8752';
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
    $pane->uuid = '84534a46-8db7-4b50-aa29-8fd7ae0f8752';
    $display->content['new-84534a46-8db7-4b50-aa29-8fd7ae0f8752'] = $pane;
    $display->panels['details'][4] = 'new-84534a46-8db7-4b50-aa29-8fd7ae0f8752';
    $pane = new stdClass();
    $pane->pid = 'new-6ff18e50-7dde-45cf-9070-87fc3a2a3293';
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
    $pane->uuid = '6ff18e50-7dde-45cf-9070-87fc3a2a3293';
    $display->content['new-6ff18e50-7dde-45cf-9070-87fc3a2a3293'] = $pane;
    $display->panels['details'][5] = 'new-6ff18e50-7dde-45cf-9070-87fc3a2a3293';
    $pane = new stdClass();
    $pane->pid = 'new-e9d1fb0e-562e-41c9-aba5-b40df44dcea2';
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
    $pane->uuid = 'e9d1fb0e-562e-41c9-aba5-b40df44dcea2';
    $display->content['new-e9d1fb0e-562e-41c9-aba5-b40df44dcea2'] = $pane;
    $display->panels['picture'][0] = 'new-e9d1fb0e-562e-41c9-aba5-b40df44dcea2';
    $pane = new stdClass();
    $pane->pid = 'new-b1121c42-ec0b-460d-8310-c984c39f4335';
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
    $pane->uuid = 'b1121c42-ec0b-460d-8310-c984c39f4335';
    $display->content['new-b1121c42-ec0b-460d-8310-c984c39f4335'] = $pane;
    $display->panels['right_side'][0] = 'new-b1121c42-ec0b-460d-8310-c984c39f4335';
    $pane = new stdClass();
    $pane->pid = 'new-c6cbcdb2-40f6-4e56-9cba-9583b39d64d9';
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
    $pane->uuid = 'c6cbcdb2-40f6-4e56-9cba-9583b39d64d9';
    $display->content['new-c6cbcdb2-40f6-4e56-9cba-9583b39d64d9'] = $pane;
    $display->panels['simlar_adverts'][0] = 'new-c6cbcdb2-40f6-4e56-9cba-9583b39d64d9';
    $pane = new stdClass();
    $pane->pid = 'new-d478c298-ec83-4583-ada8-e217e67a7795';
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
    $pane->uuid = 'd478c298-ec83-4583-ada8-e217e67a7795';
    $display->content['new-d478c298-ec83-4583-ada8-e217e67a7795'] = $pane;
    $display->panels['title'][0] = 'new-d478c298-ec83-4583-ada8-e217e67a7795';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
