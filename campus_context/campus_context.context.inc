<?php
/**
 * @file
 * campus_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function campus_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard_content_link';
  $context->description = '';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'vc/contents/*' => 'vc/contents/*',
        'node/*' => 'node/*',
        'admin/structure/fieldable-panels-panes/view/*' => 'admin/structure/fieldable-panels-panes/view/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'vc/contents',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  $export['dashboard_content_link'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard_dashboard_link';
  $context->description = '';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'vc/dashboard' => 'vc/dashboard',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'admin/vc/dashboard',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  $export['dashboard_dashboard_link'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dashboard_site_settings_link';
  $context->description = '';
  $context->tag = 'Dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'vc/site_settings' => 'vc/site_settings',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'admin/vc/site_settings',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  $export['dashboard_site_settings_link'] = $context;

  return $export;
}
