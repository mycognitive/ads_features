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
          0 => 2,
          1 => 3,
          2 => 4,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => '1',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 5,
          1 => 6,
        ),
        'parent' => '1',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_left',
          1 => 'bottom_right',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'bottom_left' => array(
        'type' => 'region',
        'title' => 'Bottom left',
        'width' => '69.51631194451038',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'bottom_right' => array(
        'type' => 'region',
        'title' => 'Bottom right',
        'width' => '30.48368805548962',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      5 => array(
        'type' => 'column',
        'width' => '69.38444497191234',
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 7,
          1 => 9,
        ),
        'class' => '',
      ),
      6 => array(
        'type' => 'column',
        'width' => '30.615555028087655',
        'width_type' => '%',
        'parent' => '3',
        'children' => array(
          0 => 8,
        ),
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_side',
        ),
        'parent' => '5',
        'class' => '',
      ),
      'left_side' => array(
        'type' => 'region',
        'title' => 'Left side',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_side',
        ),
        'parent' => '6',
        'class' => '',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'Right side',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_side_below',
          1 => 'left_side_bottom_2',
        ),
        'parent' => '5',
        'class' => '',
      ),
      'left_side_below' => array(
        'type' => 'region',
        'title' => 'Left side bottom left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      'left_side_bottom_2' => array(
        'type' => 'region',
        'title' => 'Left side bottom right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'header' => NULL,
      'left_side' => NULL,
      'right_side' => array(
        'corner_location' => 'panel',
      ),
      'left_side_below' => array(
        'corner_location' => 'panel',
      ),
      'left_side_bottom_2' => array(
        'corner_location' => 'panel',
      ),
    ),
    'left_side_below' => array(
      'style' => 'rounded_corners',
    ),
    'left_side_bottom_2' => array(
      'style' => 'rounded_corners',
    ),
    'right_side' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ef041a75-f17b-48a5-a4c5-f1395657e08d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6981d000-c074-4c6b-8a5c-0e5a0d7db816';
    $pane->panel = 'bottom_left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '10',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '6981d000-c074-4c6b-8a5c-0e5a0d7db816';
    $display->content['new-6981d000-c074-4c6b-8a5c-0e5a0d7db816'] = $pane;
    $display->panels['bottom_left'][0] = 'new-6981d000-c074-4c6b-8a5c-0e5a0d7db816';
    $pane = new stdClass();
    $pane->pid = 'new-b6d88f04-87ee-4639-8bc0-e1a8111fc9db';
    $pane->panel = 'bottom_left';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'b6d88f04-87ee-4639-8bc0-e1a8111fc9db';
    $display->content['new-b6d88f04-87ee-4639-8bc0-e1a8111fc9db'] = $pane;
    $display->panels['bottom_left'][1] = 'new-b6d88f04-87ee-4639-8bc0-e1a8111fc9db';
    $pane = new stdClass();
    $pane->pid = 'new-8b4a48b0-295d-401e-aef7-0424868019ab';
    $pane->panel = 'header';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'span',
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
    $display->panels['header'][0] = 'new-8b4a48b0-295d-401e-aef7-0424868019ab';
    $pane = new stdClass();
    $pane->pid = 'new-5bb2e88c-9e6d-4616-8bbd-c1662565fdf9';
    $pane->panel = 'left_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'lightbox2__lightbox__ads_advert_preview__large',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bb2e88c-9e6d-4616-8bbd-c1662565fdf9';
    $display->content['new-5bb2e88c-9e6d-4616-8bbd-c1662565fdf9'] = $pane;
    $display->panels['left_side'][0] = 'new-5bb2e88c-9e6d-4616-8bbd-c1662565fdf9';
    $pane = new stdClass();
    $pane->pid = 'new-cbc93b1f-7376-4a19-a768-fe3d08750fd1';
    $pane->panel = 'left_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Description',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cbc93b1f-7376-4a19-a768-fe3d08750fd1';
    $display->content['new-cbc93b1f-7376-4a19-a768-fe3d08750fd1'] = $pane;
    $display->panels['left_side'][1] = 'new-cbc93b1f-7376-4a19-a768-fe3d08750fd1';
    $pane = new stdClass();
    $pane->pid = 'new-e22c3fe4-2f3c-4606-b672-93fa1a9a63b6';
    $pane->panel = 'left_side_below';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Details',
      'body' => '',
      'format' => 'plain_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e22c3fe4-2f3c-4606-b672-93fa1a9a63b6';
    $display->content['new-e22c3fe4-2f3c-4606-b672-93fa1a9a63b6'] = $pane;
    $display->panels['left_side_below'][0] = 'new-e22c3fe4-2f3c-4606-b672-93fa1a9a63b6';
    $pane = new stdClass();
    $pane->pid = 'new-b77964f1-3898-40e6-9dbc-713a3109f79d';
    $pane->panel = 'left_side_below';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_price';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'money_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Price',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b77964f1-3898-40e6-9dbc-713a3109f79d';
    $display->content['new-b77964f1-3898-40e6-9dbc-713a3109f79d'] = $pane;
    $display->panels['left_side_below'][1] = 'new-b77964f1-3898-40e6-9dbc-713a3109f79d';
    $pane = new stdClass();
    $pane->pid = 'new-85b12a4e-66a9-4e22-821c-b65bad234727';
    $pane->panel = 'left_side_bottom_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About ad',
      'body' => '',
      'format' => 'plain_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85b12a4e-66a9-4e22-821c-b65bad234727';
    $display->content['new-85b12a4e-66a9-4e22-821c-b65bad234727'] = $pane;
    $display->panels['left_side_bottom_2'][0] = 'new-85b12a4e-66a9-4e22-821c-b65bad234727';
    $pane = new stdClass();
    $pane->pid = 'new-1752bb80-2138-4f5e-ba26-51bce14967ba';
    $pane->panel = 'left_side_bottom_2';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Last updated:',
      'override_title_heading' => 'span',
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
    $display->panels['left_side_bottom_2'][1] = 'new-1752bb80-2138-4f5e-ba26-51bce14967ba';
    $pane = new stdClass();
    $pane->pid = 'new-b74e6ed7-1e71-423c-a65e-3b96878f87fa';
    $pane->panel = 'left_side_bottom_2';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'short',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Posted:',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b74e6ed7-1e71-423c-a65e-3b96878f87fa';
    $display->content['new-b74e6ed7-1e71-423c-a65e-3b96878f87fa'] = $pane;
    $display->panels['left_side_bottom_2'][2] = 'new-b74e6ed7-1e71-423c-a65e-3b96878f87fa';
    $pane = new stdClass();
    $pane->pid = 'new-5a043721-a113-4ea7-b049-17fdd432d701';
    $pane->panel = 'left_side_bottom_2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_address';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'inline',
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
      'override_title_heading' => 'span',
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
    $display->panels['left_side_bottom_2'][3] = 'new-5a043721-a113-4ea7-b049-17fdd432d701';
    $pane = new stdClass();
    $pane->pid = 'new-dd1559b6-a21f-43d5-8f95-b24c12a94d22';
    $pane->panel = 'left_side_bottom_2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_link_source';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Website',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'dd1559b6-a21f-43d5-8f95-b24c12a94d22';
    $display->content['new-dd1559b6-a21f-43d5-8f95-b24c12a94d22'] = $pane;
    $display->panels['left_side_bottom_2'][4] = 'new-dd1559b6-a21f-43d5-8f95-b24c12a94d22';
    $pane = new stdClass();
    $pane->pid = 'new-df957087-cb62-4fc8-ad59-8699a164185e';
    $pane->panel = 'right_side';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Posted by:',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'df957087-cb62-4fc8-ad59-8699a164185e';
    $display->content['new-df957087-cb62-4fc8-ad59-8699a164185e'] = $pane;
    $display->panels['right_side'][0] = 'new-df957087-cb62-4fc8-ad59-8699a164185e';
    $pane = new stdClass();
    $pane->pid = 'new-e9ba3399-aff0-4d6b-8a1e-5c88451a0613';
    $pane->panel = 'right_side';
    $pane->type = 'rate_widget';
    $pane->subtype = 'rate_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'build_mode' => '2',
      'widget_name' => '1',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Rate this ad',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e9ba3399-aff0-4d6b-8a1e-5c88451a0613';
    $display->content['new-e9ba3399-aff0-4d6b-8a1e-5c88451a0613'] = $pane;
    $display->panels['right_side'][1] = 'new-e9ba3399-aff0-4d6b-8a1e-5c88451a0613';
    $pane = new stdClass();
    $pane->pid = 'new-d5950695-853e-4cd4-96be-45d9f073e279';
    $pane->panel = 'right_side';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contact',
      'body' => '',
      'format' => 'plain_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd5950695-853e-4cd4-96be-45d9f073e279';
    $display->content['new-d5950695-853e-4cd4-96be-45d9f073e279'] = $pane;
    $display->panels['right_side'][2] = 'new-d5950695-853e-4cd4-96be-45d9f073e279';
    $pane = new stdClass();
    $pane->pid = 'new-21d22046-74ee-49ed-ba3f-184bf7a583c1';
    $pane->panel = 'right_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_phone';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:advert:field_ad_contact_method',
          'settings' => array(
            'field_ad_contact_method' => array(
              'und' => array(
                0 => array(
                  'value' => 'phone',
                ),
              ),
            ),
            'field_ad_contact_method_value' => array(
              0 => 'phone',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'phone_national',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'as_tel_link' => 1,
        'full_hcard' => 0,
        'allow_alpha' => 0,
        'components' => array(
          'comment' => 'comment',
          'extension' => 'extension',
          'country' => 0,
        ),
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Phone',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '21d22046-74ee-49ed-ba3f-184bf7a583c1';
    $display->content['new-21d22046-74ee-49ed-ba3f-184bf7a583c1'] = $pane;
    $display->panels['right_side'][3] = 'new-21d22046-74ee-49ed-ba3f-184bf7a583c1';
    $pane = new stdClass();
    $pane->pid = 'new-90a89148-c675-4f27-a171-ad7d3256dd5e';
    $pane->panel = 'right_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_email';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:advert:field_ad_contact_method',
          'settings' => array(
            'field_ad_contact_method' => array(
              'und' => array(
                0 => array(
                  'value' => 'email',
                ),
              ),
            ),
            'field_ad_contact_method_value' => array(
              0 => 'email',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'email_contact',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'E-mail',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '90a89148-c675-4f27-a171-ad7d3256dd5e';
    $display->content['new-90a89148-c675-4f27-a171-ad7d3256dd5e'] = $pane;
    $display->panels['right_side'][4] = 'new-90a89148-c675-4f27-a171-ad7d3256dd5e';
    $pane = new stdClass();
    $pane->pid = 'new-308c28c5-5451-4537-b869-5556921ff2eb';
    $pane->panel = 'right_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ad_link';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:advert:field_ad_contact_method',
          'settings' => array(
            'field_ad_contact_method' => array(
              'und' => array(
                0 => array(
                  'value' => 'website',
                ),
              ),
            ),
            'field_ad_contact_method_value' => array(
              0 => 'website',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Website',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '308c28c5-5451-4537-b869-5556921ff2eb';
    $display->content['new-308c28c5-5451-4537-b869-5556921ff2eb'] = $pane;
    $display->panels['right_side'][5] = 'new-308c28c5-5451-4537-b869-5556921ff2eb';
    $pane = new stdClass();
    $pane->pid = 'new-7e914395-96d4-4070-b199-f8a37b8e5352';
    $pane->panel = 'right_side';
    $pane->type = 'ads_placeholder';
    $pane->subtype = 'ads_placeholder';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'shape' => 'rows',
      'size' => 'big',
      'override_title' => 1,
      'override_title_text' => 'Contact form',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '7e914395-96d4-4070-b199-f8a37b8e5352';
    $display->content['new-7e914395-96d4-4070-b199-f8a37b8e5352'] = $pane;
    $display->panels['right_side'][6] = 'new-7e914395-96d4-4070-b199-f8a37b8e5352';
    $pane = new stdClass();
    $pane->pid = 'new-d100e5f8-ef33-4683-ba70-f96958e8d409';
    $pane->panel = 'right_side';
    $pane->type = 'ads_placeholder';
    $pane->subtype = 'ads_placeholder';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'shape' => 'rows',
      'size' => 'medium',
      'override_title' => 1,
      'override_title_text' => 'Similar adverts',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd100e5f8-ef33-4683-ba70-f96958e8d409';
    $display->content['new-d100e5f8-ef33-4683-ba70-f96958e8d409'] = $pane;
    $display->panels['right_side'][7] = 'new-d100e5f8-ef33-4683-ba70-f96958e8d409';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-8b4a48b0-295d-401e-aef7-0424868019ab';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
