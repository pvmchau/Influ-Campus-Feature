<?php
/**
 * @file
 * campus_proflle2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campus_proflle2_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function campus_proflle2_default_profile2_type() {
  $items = array();
  $items['adelaide_leadership'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "adelaide_leadership",
    "label" : "Adelaide Leadership",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['global_leadership'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "global_leadership",
    "label" : "Global Leadership",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
