<?php
/**
 * @file
 * campus_demo_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function campus_demo_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Campus event',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'db659268-8b60-40a4-45d4-5fc476d3fab4',
    'vocabulary_machine_name' => 'event_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Global event',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'eaedc1bc-2d99-8fa4-c50c-1ace69eecc3a',
    'vocabulary_machine_name' => 'event_type',
    'metatags' => array(),
  );
  return $terms;
}
