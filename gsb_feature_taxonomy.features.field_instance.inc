<?php
/**
 * @file
 * gsb_feature_taxonomy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_taxonomy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-gip_programs-field_gip_program_value'
  $field_instances['taxonomy_term-gip_programs-field_gip_program_value'] = array(
    'bundle' => 'gip_programs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_gip_program_value',
    'label' => 'GIP Program Option Value',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-panopoly_categories-field_featured_image'
  $field_instances['taxonomy_term-panopoly_categories-field_featured_image'] = array(
    'bundle' => 'panopoly_categories',
    'deleted' => 0,
    'description' => 'This is the primary image to be associated with the taxonomy term',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => 'panopoly_image_quarter',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_featured_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'file_directory' => 'categories',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '300x200',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'panopoly_image_thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-workbench_sections-field_workbench_section_path'
  $field_instances['taxonomy_term-workbench_sections-field_workbench_section_path'] = array(
    'bundle' => 'workbench_sections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The path where the menu should appear.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_workbench_section_path',
    'label' => 'Menu Location',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-workbench_sections-field_workbench_section_use_menu'
  $field_instances['taxonomy_term-workbench_sections-field_workbench_section_use_menu'] = array(
    'bundle' => 'workbench_sections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If checked a menu will be created for this section. If you uncheck this after it has been checked the menu will not be deleted. It will have to be manually deleted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_workbench_section_use_menu',
    'label' => 'Use a menu for this section.',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('GIP Program Option Value');
  t('If checked a menu will be created for this section. If you uncheck this after it has been checked the menu will not be deleted. It will have to be manually deleted.');
  t('Image');
  t('Menu Location');
  t('The path where the menu should appear.');
  t('This is the primary image to be associated with the taxonomy term');
  t('Use a menu for this section.');

  return $field_instances;
}
