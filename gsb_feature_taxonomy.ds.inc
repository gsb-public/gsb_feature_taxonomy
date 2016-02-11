<?php
/**
 * @file
 * gsb_feature_taxonomy.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_taxonomy_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|academic_area|insight_topics';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'academic_area';
  $ds_fieldsetting->view_mode = 'insight_topics';
  $ds_fieldsetting->settings = array(
    'field_topic_page_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['taxonomy_term|academic_area|insight_topics'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|academic_area|insight_topics_action';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'academic_area';
  $ds_fieldsetting->view_mode = 'insight_topics_action';
  $ds_fieldsetting->settings = array(
    'insight_topics_action' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['taxonomy_term|academic_area|insight_topics_action'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|business_insight_topic|insight_topics';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'business_insight_topic';
  $ds_fieldsetting->view_mode = 'insight_topics';
  $ds_fieldsetting->settings = array(
    'field_topic_page_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['taxonomy_term|business_insight_topic|insight_topics'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|business_insight_topic|insight_topics_action';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'business_insight_topic';
  $ds_fieldsetting->view_mode = 'insight_topics_action';
  $ds_fieldsetting->settings = array(
    'insight_topics_action' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['taxonomy_term|business_insight_topic|insight_topics_action'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|program_category|short_name';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'program_category';
  $ds_fieldsetting->view_mode = 'short_name';
  $ds_fieldsetting->settings = array(
    'field_short_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['taxonomy_term|program_category|short_name'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|region_interest|insight_topics';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'region_interest';
  $ds_fieldsetting->view_mode = 'insight_topics';
  $ds_fieldsetting->settings = array(
    'field_topic_page_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['taxonomy_term|region_interest|insight_topics'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|region_interest|insight_topics_action';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'region_interest';
  $ds_fieldsetting->view_mode = 'insight_topics_action';
  $ds_fieldsetting->settings = array(
    'insight_topics_action' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['taxonomy_term|region_interest|insight_topics_action'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_taxonomy_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'insight_topics_action';
  $ds_field->label = 'Insight topics action';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = 'academic_area|insight_topics_action
business_insight_topic|insight_topics_action
region_interest|insight_topics_action';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[term:field-topic-page-url:url]"><span class="term-action">[term:field-action]</span> <span class="term-name"><strong>[term:name]</strong></span></a>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['insight_topics_action'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_taxonomy_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|academic_area|insight_topics';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'academic_area';
  $ds_layout->view_mode = 'insight_topics';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_topic_page_url',
      ),
    ),
    'fields' => array(
      'field_topic_page_url' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'span',
    ),
    'layout_wrapper' => 'span',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|academic_area|insight_topics'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|academic_area|insight_topics_action';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'academic_area';
  $ds_layout->view_mode = 'insight_topics_action';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'insight_topics_action',
      ),
    ),
    'fields' => array(
      'insight_topics_action' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|academic_area|insight_topics_action'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|business_insight_topic|insight_topics';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'business_insight_topic';
  $ds_layout->view_mode = 'insight_topics';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_topic_page_url',
      ),
    ),
    'fields' => array(
      'field_topic_page_url' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'span',
    ),
    'layout_wrapper' => 'span',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|business_insight_topic|insight_topics'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|business_insight_topic|insight_topics_action';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'business_insight_topic';
  $ds_layout->view_mode = 'insight_topics_action';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'insight_topics_action',
      ),
    ),
    'fields' => array(
      'insight_topics_action' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|business_insight_topic|insight_topics_action'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|program_category|short_name';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'program_category';
  $ds_layout->view_mode = 'short_name';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_short_name',
      ),
    ),
    'fields' => array(
      'field_short_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|program_category|short_name'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|region_interest|insight_topics';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'region_interest';
  $ds_layout->view_mode = 'insight_topics';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_topic_page_url',
      ),
    ),
    'fields' => array(
      'field_topic_page_url' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'span',
    ),
    'layout_wrapper' => 'span',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|region_interest|insight_topics'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|region_interest|insight_topics_action';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'region_interest';
  $ds_layout->view_mode = 'insight_topics_action';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'insight_topics_action',
      ),
    ),
    'fields' => array(
      'insight_topics_action' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|region_interest|insight_topics_action'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_taxonomy_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'insight_topics';
  $ds_view_mode->label = 'Insight topic urls';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['insight_topics'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'insight_topics_action';
  $ds_view_mode->label = 'Insight topic action';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['insight_topics_action'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'short_name';
  $ds_view_mode->label = 'Short name';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['short_name'] = $ds_view_mode;

  return $export;
}
