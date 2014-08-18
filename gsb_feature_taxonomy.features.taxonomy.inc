<?php
/**
 * @file
 * gsb_feature_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'academic_area' => array(
      'name' => 'Academic Area',
      'machine_name' => 'academic_area',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'business_insight_topic' => array(
      'name' => 'Business Insight Topic',
      'machine_name' => 'business_insight_topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'region_interest' => array(
      'name' => 'Region of Interest',
      'machine_name' => 'region_interest',
      'description' => 'Region of Interest taxonomy.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
