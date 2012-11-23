<?php
/**
 * @file
 * campus_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function campus_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Display user link in Dashboard Header';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'dashboard_user_menu';
  $fe_block_boxes->body = '<?php
    global $user;
    print \'<div class="welcome_text">Welcome, <a href=/user/\'. $user->uid .\'>\' . $user->name . \'</a></div><div class="account_text"><a href=/user/\' . $user->uid . \'/edit>Account Settings</a></div><div class="logout_text"><a href="/user/logout">Log out</a></div>\';
?>
';

  $export['dashboard_user_menu'] = $fe_block_boxes;

  return $export;
}
