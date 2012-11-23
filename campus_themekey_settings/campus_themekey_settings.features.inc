<?php
/**
 * @file
 * campus_themekey_settings.features.inc
 */

/**
 * Implements hook_themekey_features_rule_chain().
 */
function campus_themekey_settings_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'vc/%',
      'theme' => 'admintheme',
      'enabled' => '1',
      'wildcards' => array(),
      'module' => 'campus_themekey_settings',
    ),
    'string' => '"drupal:path = vc/% >>> admintheme"',
    'childs' => array(
      0 => array(
        'rule' => array(
          'property' => 'user:role',
          'operator' => '=',
          'value' => 'moderator',
          'theme' => 'admintheme',
          'enabled' => '1',
          'wildcards' => 'a:0:{}',
          'module' => 'campus_themekey_settings',
        ),
        'string' => '"user:role = moderator >>> admintheme"',
        'childs' => array(),
      ),
      1 => array(
        'rule' => array(
          'property' => 'user:role',
          'operator' => '=',
          'value' => 'administrator',
          'theme' => 'admintheme',
          'enabled' => '1',
          'wildcards' => 'a:0:{}',
          'module' => 'campus_themekey_settings',
        ),
        'string' => '"user:role = administrator >>> admintheme"',
        'childs' => array(),
      ),
    ),
  ),
  1 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/%/edit',
      'theme' => 'default',
      'enabled' => '1',
      'wildcards' => array(),
      'module' => 'campus_themekey_settings',
    ),
    'string' => '"drupal:path = node/%/edit >>> default"',
    'childs' => array(
      0 => array(
        'rule' => array(
          'property' => 'user:role',
          'operator' => '=',
          'value' => 'moderator',
          'theme' => 'admintheme',
          'enabled' => '1',
          'wildcards' => 'a:0:{}',
          'module' => 'campus_themekey_settings',
        ),
        'string' => '"user:role = moderator >>> admintheme"',
        'childs' => array(),
      ),
    ),
  ),
  2 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'node/add/%',
      'theme' => 'admintheme',
      'enabled' => '1',
      'wildcards' => array(),
      'module' => 'campus_themekey_settings',
    ),
    'string' => '"drupal:path = node/add/% >>> admintheme"',
    'childs' => array(
      0 => array(
        'rule' => array(
          'property' => 'user:role',
          'operator' => '=',
          'value' => 'moderator',
          'theme' => 'admintheme',
          'enabled' => '1',
          'wildcards' => 'a:0:{}',
          'module' => 'campus_themekey_settings',
        ),
        'string' => '"user:role = moderator >>> admintheme"',
        'childs' => array(),
      ),
    ),
  ),
  3 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user/%',
      'theme' => 'default',
      'enabled' => '1',
      'wildcards' => array(),
      'module' => 'campus_themekey_settings',
    ),
    'string' => '"drupal:path = user/% >>> default"',
    'childs' => array(
      0 => array(
        'rule' => array(
          'property' => 'user:role',
          'operator' => '=',
          'value' => 'moderator',
          'theme' => 'admintheme',
          'enabled' => '1',
          'wildcards' => 'a:0:{}',
          'module' => 'campus_themekey_settings',
        ),
        'string' => '"user:role = moderator >>> admintheme"',
        'childs' => array(),
      ),
    ),
  ),
  4 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'admin/structure/fieldable-panels-panes/view/%',
      'theme' => 'default',
      'enabled' => '1',
      'wildcards' => array(),
      'module' => 'campus_themekey_settings',
    ),
    'string' => '"drupal:path = admin/structure/fieldable-panels-panes/view/% >>> default"',
    'childs' => array(
      0 => array(
        'rule' => array(
          'property' => 'user:role',
          'operator' => '=',
          'value' => 'moderator',
          'theme' => 'admintheme',
          'enabled' => '1',
          'wildcards' => 'a:0:{}',
          'module' => 'campus_themekey_settings',
        ),
        'string' => '"user:role = moderator >>> admintheme"',
        'childs' => array(),
      ),
    ),
  ),
  5 => array(
    'rule' => array(
      'property' => 'themekey_compat:module_system_triggers_theme',
      'operator' => '=',
      'value' => 'static',
      'theme' => 'default',
      'enabled' => '1',
      'wildcards' => 'a:0:{}',
      'module' => 'campus_themekey_settings',
    ),
    'string' => '"drupal:path:wildcard themekey_compat:module_system_triggers_theme = static >>> default"',
    'childs' => array(),
  ),
);

return $rules;
}
