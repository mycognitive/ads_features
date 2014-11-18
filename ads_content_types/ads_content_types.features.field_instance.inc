<?php
/**
 * @file
 * ads_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ads_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-advert-body'
  $field_instances['node-advert-body'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_address'
  $field_instances['node-advert-field_ad_address'] = array(
    'bundle' => 'advert',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|advert|field_ad_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'GB',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 11,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_category'
  $field_instances['node-advert-field_ad_category'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select a category.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'cshs',
      'settings' => array(
        'cshs' => array(
          'force_deepest' => 1,
          'level_labels' => '',
          'parent' => 0,
        ),
      ),
      'type' => 'cshs',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_category_node_ref'
  $field_instances['node-advert-field_ad_category_node_ref'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_category_node_ref',
    'label' => 'Category node references',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_contact_method'
  $field_instances['node-advert-field_ad_contact_method'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose your preferred method of contact for this advert.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_contact_method',
    'label' => 'Preferred method of contact',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_email'
  $field_instances['node-advert-field_ad_email'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your e-mail address for advert contact.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 9,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_email',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_image'
  $field_instances['node-advert-field_ad_image'] = array(
    'bundle' => 'advert',
    'deleted' => 0,
    'description' => 'Please upload images if any.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'lightbox2',
        'settings' => array(),
        'type' => 'lightbox2__lightbox__medium__original',
        'weight' => 3,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1600x1200',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_link'
  $field_instances['node-advert-field_ad_link'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_link_source'
  $field_instances['node-advert-field_ad_link_source'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_link_source',
    'label' => 'Source',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_location'
  $field_instances['node-advert-field_ad_location'] = array(
    'bundle' => 'advert',
    'default_value' => array(
      0 => array(
        'tid' => 1022,
      ),
    ),
    'deleted' => 0,
    'description' => 'Please select a location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'cshs',
      'settings' => array(
        'cshs' => array(
          'force_deepest' => 0,
          'level_labels' => '',
          'parent' => 0,
        ),
      ),
      'type' => 'cshs',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-advert-field_ad_phone'
  $field_instances['node-advert-field_ad_phone'] = array(
    'bundle' => 'advert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'allow_alpha' => FALSE,
          'as_tel_link' => FALSE,
          'components' => array(
            'comment' => 'comment',
            'extension' => 'extension',
          ),
          'full_hcard' => FALSE,
        ),
        'type' => 'phone_international',
        'weight' => 4,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'phone',
      'settings' => array(
        'comment_allowed_values_position' => 'before',
        'country_options' => array(
          'all_country_codes' => 1,
          'country_code_position' => 'after',
          'country_codes' => array(
            'country_selection' => array(
              'AC' => 0,
              'AD' => 0,
              'AE' => 0,
              'AF' => 'AF',
              'AG' => 0,
              'AI' => 0,
              'AL' => 0,
              'AM' => 0,
              'AO' => 0,
              'AR' => 0,
              'AS' => 0,
              'AT' => 0,
              'AU' => 0,
              'AW' => 0,
              'AX' => 0,
              'AZ' => 0,
              'BA' => 0,
              'BB' => 0,
              'BD' => 0,
              'BE' => 0,
              'BF' => 0,
              'BG' => 0,
              'BH' => 0,
              'BI' => 0,
              'BJ' => 0,
              'BL' => 0,
              'BM' => 0,
              'BN' => 0,
              'BO' => 0,
              'BQ' => 0,
              'BR' => 0,
              'BS' => 0,
              'BT' => 0,
              'BW' => 0,
              'BY' => 0,
              'BZ' => 0,
              'CA' => 0,
              'CC' => 0,
              'CD' => 0,
              'CF' => 0,
              'CG' => 0,
              'CH' => 0,
              'CI' => 0,
              'CK' => 0,
              'CL' => 0,
              'CM' => 0,
              'CN' => 0,
              'CO' => 0,
              'CR' => 0,
              'CU' => 0,
              'CV' => 0,
              'CW' => 0,
              'CX' => 0,
              'CY' => 0,
              'CZ' => 0,
              'DE' => 0,
              'DJ' => 0,
              'DK' => 0,
              'DM' => 0,
              'DO' => 0,
              'DZ' => 0,
              'EC' => 0,
              'EE' => 0,
              'EG' => 0,
              'EH' => 0,
              'ER' => 0,
              'ES' => 0,
              'ET' => 0,
              'FI' => 0,
              'FJ' => 0,
              'FK' => 0,
              'FM' => 0,
              'FO' => 0,
              'FR' => 0,
              'GA' => 0,
              'GB' => 'GB',
              'GD' => 0,
              'GE' => 0,
              'GF' => 0,
              'GG' => 0,
              'GH' => 0,
              'GI' => 0,
              'GL' => 0,
              'GM' => 0,
              'GN' => 0,
              'GP' => 0,
              'GQ' => 0,
              'GR' => 0,
              'GT' => 0,
              'GU' => 0,
              'GW' => 0,
              'GY' => 0,
              'HK' => 0,
              'HN' => 0,
              'HR' => 0,
              'HT' => 0,
              'HU' => 0,
              'ID' => 0,
              'IE' => 0,
              'IL' => 0,
              'IM' => 0,
              'IN' => 0,
              'IO' => 0,
              'IQ' => 0,
              'IR' => 0,
              'IS' => 0,
              'IT' => 0,
              'JE' => 0,
              'JM' => 0,
              'JO' => 0,
              'JP' => 0,
              'KE' => 0,
              'KG' => 0,
              'KH' => 0,
              'KI' => 0,
              'KM' => 0,
              'KN' => 0,
              'KP' => 0,
              'KR' => 0,
              'KW' => 0,
              'KY' => 0,
              'KZ' => 0,
              'LA' => 0,
              'LB' => 0,
              'LC' => 0,
              'LI' => 0,
              'LK' => 0,
              'LR' => 0,
              'LS' => 0,
              'LT' => 0,
              'LU' => 0,
              'LV' => 0,
              'LY' => 0,
              'MA' => 0,
              'MC' => 0,
              'MD' => 0,
              'ME' => 0,
              'MF' => 0,
              'MG' => 0,
              'MH' => 0,
              'MK' => 0,
              'ML' => 0,
              'MM' => 0,
              'MN' => 0,
              'MO' => 0,
              'MP' => 0,
              'MQ' => 0,
              'MR' => 0,
              'MS' => 0,
              'MT' => 0,
              'MU' => 0,
              'MV' => 0,
              'MW' => 0,
              'MX' => 0,
              'MY' => 0,
              'MZ' => 0,
              'NA' => 0,
              'NC' => 0,
              'NE' => 0,
              'NF' => 0,
              'NG' => 0,
              'NI' => 0,
              'NL' => 0,
              'NO' => 0,
              'NP' => 0,
              'NR' => 0,
              'NU' => 0,
              'NZ' => 0,
              'OM' => 0,
              'PA' => 0,
              'PE' => 0,
              'PF' => 0,
              'PG' => 0,
              'PH' => 0,
              'PK' => 0,
              'PL' => 0,
              'PM' => 0,
              'PR' => 0,
              'PS' => 0,
              'PT' => 0,
              'PW' => 0,
              'PY' => 0,
              'QA' => 0,
              'RE' => 0,
              'RO' => 0,
              'RS' => 0,
              'RU' => 0,
              'RW' => 0,
              'SA' => 0,
              'SB' => 0,
              'SC' => 0,
              'SD' => 0,
              'SE' => 0,
              'SG' => 0,
              'SH' => 0,
              'SI' => 0,
              'SJ' => 0,
              'SK' => 0,
              'SL' => 0,
              'SM' => 0,
              'SN' => 0,
              'SO' => 0,
              'SR' => 0,
              'SS' => 0,
              'ST' => 0,
              'SV' => 0,
              'SX' => 0,
              'SY' => 0,
              'SZ' => 0,
              'TC' => 0,
              'TD' => 0,
              'TG' => 0,
              'TH' => 0,
              'TJ' => 0,
              'TK' => 0,
              'TL' => 0,
              'TM' => 0,
              'TN' => 0,
              'TO' => 0,
              'TR' => 0,
              'TT' => 0,
              'TV' => 0,
              'TW' => 0,
              'TZ' => 0,
              'UA' => 0,
              'UG' => 0,
              'US' => 0,
              'UY' => 0,
              'UZ' => 0,
              'VA' => 0,
              'VC' => 0,
              'VE' => 0,
              'VG' => 0,
              'VI' => 0,
              'VN' => 0,
              'VU' => 0,
              'WF' => 0,
              'WS' => 0,
              'YE' => 0,
              'YT' => 0,
              'ZA' => 0,
              'ZM' => 0,
              'ZW' => 0,
            ),
            'hide_single_cc' => 0,
          ),
          'default_country' => 'GB',
          'enable_default_country' => 1,
        ),
        'enable_comment' => 1,
        'enable_extension' => 0,
        'use_tel_input' => 1,
      ),
      'type' => 'phone',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-level_1-body'
  $field_instances['node-level_1-body'] = array(
    'bundle' => 'level_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-level_1-field_level_1_field'
  $field_instances['node-level_1-field_level_1_field'] = array(
    'bundle' => 'level_1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 1,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_level_1_field',
    'label' => 'Level 1 Field',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-level_2-body'
  $field_instances['node-level_2-body'] = array(
    'bundle' => 'level_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-level_2-field_level_2_field'
  $field_instances['node-level_2-field_level_2_field'] = array(
    'bundle' => 'level_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 1,
      ),
      'search_results_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_level_2_field',
    'label' => 'Level 2 Field',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Body');
  t('Category');
  t('Category node references');
  t('Choose your preferred method of contact for this advert.');
  t('Description');
  t('E-mail');
  t('Image');
  t('Level 1 Field');
  t('Level 2 Field');
  t('Link');
  t('Location');
  t('Phone');
  t('Please select a location.');
  t('Please upload images if any.');
  t('Preferred method of contact');
  t('Select a category.');
  t('Source');
  t('Your e-mail address for advert contact.');

  return $field_instances;
}
