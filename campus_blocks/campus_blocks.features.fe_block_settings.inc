<?php
/**
 * @file
 * campus_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function campus_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-campus_copyright_menu' => array(
      'machine_name' => 'campus_copyright_menu',
      'module' => 'block',
    ),
    'block-campus_dropdown_menu' => array(
      'machine_name' => 'campus_dropdown_menu',
      'module' => 'block',
    ),
    'block-campus_new_influencer' => array(
      'machine_name' => 'campus_new_influencer',
      'module' => 'block',
    ),
    'block-dashboard_user_menu' => array(
      'machine_name' => 'dashboard_user_menu',
      'module' => 'block',
    ),
    'menu-menu-footer-menu' => array(
      'delta' => 'menu-footer-menu',
      'module' => 'menu',
    ),
    'menu-menu-fresh-dashboard' => array(
      'delta' => 'menu-fresh-dashboard',
      'module' => 'menu',
    ),
    'menu-menu-homepage-news-box' => array(
      'delta' => 'menu-homepage-news-box',
      'module' => 'menu',
    ),
    'menu-menu-influncer-campus' => array(
      'delta' => 'menu-influncer-campus',
      'module' => 'menu',
    ),
    'menu-menu-social-network-link' => array(
      'delta' => 'menu-social-network-link',
      'module' => 'menu',
    ),
    'menu_block-1' => array(
      'delta' => '1',
      'module' => 'menu_block',
    ),
    'menu_block-10' => array(
      'delta' => '10',
      'module' => 'menu_block',
    ),
    'menu_block-11' => array(
      'delta' => '11',
      'module' => 'menu_block',
    ),
    'menu_block-2' => array(
      'delta' => '2',
      'module' => 'menu_block',
      'node_type' => array(
        'event' => TRUE,
      ),
    ),
    'menu_block-3' => array(
      'delta' => '3',
      'module' => 'menu_block',
    ),
    'menu_block-4' => array(
      'delta' => '4',
      'module' => 'menu_block',
    ),
    'menu_block-5' => array(
      'delta' => '5',
      'module' => 'menu_block',
    ),
    'menu_block-6' => array(
      'delta' => '6',
      'module' => 'menu_block',
    ),
    'menu_block-7' => array(
      'delta' => '7',
      'module' => 'menu_block',
    ),
    'menu_block-8' => array(
      'delta' => '8',
      'module' => 'menu_block',
    ),
    'menu_block-9' => array(
      'delta' => '9',
      'module' => 'menu_block',
    ),
    'superfish-1' => array(
      'delta' => '1',
      'module' => 'superfish',
    ),
    'superfish-2' => array(
      'delta' => '2',
      'module' => 'superfish',
    ),
    'vc_content-campus_address' => array(
      'delta' => 'campus_address',
      'module' => 'vc_content',
    ),
    'vc_content-campus_event_page_title' => array(
      'delta' => 'campus_event_page_title',
      'module' => 'vc_content',
    ),
    'vc_content-campus_ministry_page_title' => array(
      'delta' => 'campus_ministry_page_title',
      'module' => 'vc_content',
    ),
    'vc_content-campus_services' => array(
      'delta' => 'campus_services',
      'module' => 'vc_content',
    ),
    'vc_content-campus_team_page_title' => array(
      'delta' => 'campus_team_page_title',
      'module' => 'vc_content',
    ),
    'vc_content-current_campus_menu' => array(
      'delta' => 'current_campus_menu',
      'module' => 'vc_content',
    ),
    'vc_remote_view-global_event_block' => array(
      'delta' => 'global_event_block',
      'module' => 'vc_remote_view',
    ),
    'views-2c4f8e6db5a7dbc2993104a1c59bf960' => array(
      'delta' => '2c4f8e6db5a7dbc2993104a1c59bf960',
      'module' => 'views',
    ),
    'views-34660a18b89979db19eb40e98f4bbdb2' => array(
      'delta' => '34660a18b89979db19eb40e98f4bbdb2',
      'module' => 'views',
    ),
    'views-de262bbb41b1cf4bb341801c16fb3f54' => array(
      'delta' => 'de262bbb41b1cf4bb341801c16fb3f54',
      'module' => 'views',
    ),
    'views-event-block' => array(
      'delta' => 'event-block',
      'module' => 'views',
    ),
    'views-event-influ_global_image' => array(
      'delta' => 'event-influ_global_image',
      'module' => 'views',
    ),
    'views-global_event-block' => array(
      'delta' => 'global_event-block',
      'module' => 'views',
    ),
    'views-homepage-block' => array(
      'delta' => 'homepage-block',
      'module' => 'views',
    ),
    'views-homepage-block_1' => array(
      'delta' => 'homepage-block_1',
      'module' => 'views',
    ),
    'views-influ_pages_header-block_1' => array(
      'delta' => 'influ_pages_header-block_1',
      'module' => 'views',
    ),
    'views-influencer-block' => array(
      'delta' => 'influencer-block',
      'module' => 'views',
    ),
    'views-influencer-block_1' => array(
      'delta' => 'influencer-block_1',
      'module' => 'views',
    ),
    'views-ministry-block' => array(
      'delta' => 'ministry-block',
      'module' => 'views',
    ),
    'views-vc_content_admin-block_1' => array(
      'delta' => 'vc_content_admin-block_1',
      'module' => 'views',
    ),
    'views-video-block' => array(
      'delta' => 'video-block',
      'module' => 'views',
    ),
    'webform-client-block-17' => array(
      'delta' => 'client-block-17',
      'module' => 'webform',
    ),
    'webform-client-block-23' => array(
      'delta' => 'client-block-23',
      'module' => 'webform',
    ),
    'webform-client-block-25' => array(
      'delta' => 'client-block-25',
      'module' => 'webform',
    ),
    'webform-client-block-28' => array(
      'delta' => 'client-block-28',
      'module' => 'webform',
    ),
    'webform-client-block-29' => array(
      'delta' => 'client-block-29',
      'module' => 'webform',
    ),
    'webform-client-block-30' => array(
      'delta' => 'client-block-30',
      'module' => 'webform',
    ),
    'webform-client-block-31' => array(
      'delta' => 'client-block-31',
      'module' => 'webform',
    ),
    'webform-client-block-4' => array(
      'delta' => 'client-block-4',
      'module' => 'webform',
    ),
  );

  // admintheme
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_new_influencer'] = array(
    'module' => 'block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'campus_new_influencer',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-dashboard_user_menu'] = array(
    'module' => 'block',
    'theme' => 'admintheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'branding',
    'custom' => '0',
    'visibility' => '2',
    'pages' => 'user_is_logged_in()',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'dashboard_user_menu',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-homepage-news-box'] = array(
    'module' => 'menu',
    'delta' => 'menu-homepage-news-box',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-influncer-campus'] = array(
    'module' => 'menu',
    'delta' => 'menu-influncer-campus',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-10'] = array(
    'module' => 'menu_block',
    'delta' => '10',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-11'] = array(
    'module' => 'menu_block',
    'delta' => '11',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-7'] = array(
    'module' => 'menu_block',
    'delta' => '7',
    'theme' => 'admintheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-8'] = array(
    'module' => 'menu_block',
    'delta' => '8',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-9'] = array(
    'module' => 'menu_block',
    'delta' => '9',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '-15',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_event_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_event_page_title',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_ministry_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_ministry_page_title',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_team_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_team_page_title',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_remote_view-global_event_block'] = array(
    'module' => 'vc_remote_view',
    'delta' => 'global_event_block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views-2c4f8e6db5a7dbc2993104a1c59bf960'] = array(
    'module' => 'views',
    'delta' => '2c4f8e6db5a7dbc2993104a1c59bf960',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-34660a18b89979db19eb40e98f4bbdb2'] = array(
    'module' => 'views',
    'delta' => '34660a18b89979db19eb40e98f4bbdb2',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-de262bbb41b1cf4bb341801c16fb3f54'] = array(
    'module' => 'views',
    'delta' => 'de262bbb41b1cf4bb341801c16fb3f54',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-block'] = array(
    'module' => 'views',
    'delta' => 'event-block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-influ_global_image'] = array(
    'module' => 'views',
    'delta' => 'event-influ_global_image',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-global_event-block'] = array(
    'module' => 'views',
    'delta' => 'global_event-block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block'] = array(
    'module' => 'views',
    'delta' => 'homepage-block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block_1'] = array(
    'module' => 'views',
    'delta' => 'homepage-block_1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influ_pages_header-block_1'] = array(
    'module' => 'views',
    'delta' => 'influ_pages_header-block_1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block'] = array(
    'module' => 'views',
    'delta' => 'influencer-block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block_1'] = array(
    'module' => 'views',
    'delta' => 'influencer-block_1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-ministry-block'] = array(
    'module' => 'views',
    'delta' => 'ministry-block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-vc_content_admin-block_1'] = array(
    'module' => 'views',
    'delta' => 'vc_content_admin-block_1',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-video-block'] = array(
    'module' => 'views',
    'delta' => 'video-block',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-17'] = array(
    'module' => 'webform',
    'delta' => 'client-block-17',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'concierge',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-23'] = array(
    'module' => 'webform',
    'delta' => 'client-block-23',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-25'] = array(
    'module' => 'webform',
    'delta' => 'client-block-25',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-28'] = array(
    'module' => 'webform',
    'delta' => 'client-block-28',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-29'] = array(
    'module' => 'webform',
    'delta' => 'client-block-29',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-30'] = array(
    'module' => 'webform',
    'delta' => 'client-block-30',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-31'] = array(
    'module' => 'webform',
    'delta' => 'client-block-31',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-4'] = array(
    'module' => 'webform',
    'delta' => 'client-block-4',
    'theme' => 'admintheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['admintheme'] = $theme;

  // bartik
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_new_influencer'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'campus_new_influencer',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-dashboard_user_menu'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '2',
    'pages' => 'user_is_logged_in()',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'dashboard_user_menu',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-homepage-news-box'] = array(
    'module' => 'menu',
    'delta' => 'menu-homepage-news-box',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-influncer-campus'] = array(
    'module' => 'menu',
    'delta' => 'menu-influncer-campus',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-10'] = array(
    'module' => 'menu_block',
    'delta' => '10',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-11'] = array(
    'module' => 'menu_block',
    'delta' => '11',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-7'] = array(
    'module' => 'menu_block',
    'delta' => '7',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-8'] = array(
    'module' => 'menu_block',
    'delta' => '8',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-9'] = array(
    'module' => 'menu_block',
    'delta' => '9',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_event_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_event_page_title',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_ministry_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_ministry_page_title',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_team_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_team_page_title',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_remote_view-global_event_block'] = array(
    'module' => 'vc_remote_view',
    'delta' => 'global_event_block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views-2c4f8e6db5a7dbc2993104a1c59bf960'] = array(
    'module' => 'views',
    'delta' => '2c4f8e6db5a7dbc2993104a1c59bf960',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-34660a18b89979db19eb40e98f4bbdb2'] = array(
    'module' => 'views',
    'delta' => '34660a18b89979db19eb40e98f4bbdb2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-de262bbb41b1cf4bb341801c16fb3f54'] = array(
    'module' => 'views',
    'delta' => 'de262bbb41b1cf4bb341801c16fb3f54',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-block'] = array(
    'module' => 'views',
    'delta' => 'event-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-influ_global_image'] = array(
    'module' => 'views',
    'delta' => 'event-influ_global_image',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-global_event-block'] = array(
    'module' => 'views',
    'delta' => 'global_event-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block'] = array(
    'module' => 'views',
    'delta' => 'homepage-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block_1'] = array(
    'module' => 'views',
    'delta' => 'homepage-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influ_pages_header-block_1'] = array(
    'module' => 'views',
    'delta' => 'influ_pages_header-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block'] = array(
    'module' => 'views',
    'delta' => 'influencer-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block_1'] = array(
    'module' => 'views',
    'delta' => 'influencer-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-ministry-block'] = array(
    'module' => 'views',
    'delta' => 'ministry-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-vc_content_admin-block_1'] = array(
    'module' => 'views',
    'delta' => 'vc_content_admin-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-video-block'] = array(
    'module' => 'views',
    'delta' => 'video-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-17'] = array(
    'module' => 'webform',
    'delta' => 'client-block-17',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'concierge',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-23'] = array(
    'module' => 'webform',
    'delta' => 'client-block-23',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-25'] = array(
    'module' => 'webform',
    'delta' => 'client-block-25',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-28'] = array(
    'module' => 'webform',
    'delta' => 'client-block-28',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-29'] = array(
    'module' => 'webform',
    'delta' => 'client-block-29',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-30'] = array(
    'module' => 'webform',
    'delta' => 'client-block-30',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-31'] = array(
    'module' => 'webform',
    'delta' => 'client-block-31',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-4'] = array(
    'module' => 'webform',
    'delta' => 'client-block-4',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // influencerschurch
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_new_influencer'] = array(
    'module' => 'block',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-14',
    'region' => 'branding',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'campus_new_influencer',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-dashboard_user_menu'] = array(
    'module' => 'block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-29',
    'region' => '',
    'custom' => '0',
    'visibility' => '2',
    'pages' => 'user_is_logged_in()',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'dashboard_user_menu',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-38',
    'region' => 'footer_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-homepage-news-box'] = array(
    'module' => 'menu',
    'delta' => 'menu-homepage-news-box',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-21',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-influncer-campus'] = array(
    'module' => 'menu',
    'delta' => 'menu-influncer-campus',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-19',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-37',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-10'] = array(
    'module' => 'menu_block',
    'delta' => '10',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-20',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-11'] = array(
    'module' => 'menu_block',
    'delta' => '11',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-36',
    'region' => 'footer_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-11',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-12',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-7'] = array(
    'module' => 'menu_block',
    'delta' => '7',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-31',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-8'] = array(
    'module' => 'menu_block',
    'delta' => '8',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-9'] = array(
    'module' => 'menu_block',
    'delta' => '9',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-18',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '-13',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-26',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_event_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_event_page_title',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_ministry_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_ministry_page_title',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_team_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_team_page_title',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-34',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'influencerschurch',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_remote_view-global_event_block'] = array(
    'module' => 'vc_remote_view',
    'delta' => 'global_event_block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '-24',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views-2c4f8e6db5a7dbc2993104a1c59bf960'] = array(
    'module' => 'views',
    'delta' => '2c4f8e6db5a7dbc2993104a1c59bf960',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-34660a18b89979db19eb40e98f4bbdb2'] = array(
    'module' => 'views',
    'delta' => '34660a18b89979db19eb40e98f4bbdb2',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '15',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-de262bbb41b1cf4bb341801c16fb3f54'] = array(
    'module' => 'views',
    'delta' => 'de262bbb41b1cf4bb341801c16fb3f54',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-block'] = array(
    'module' => 'views',
    'delta' => 'event-block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '4',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-influ_global_image'] = array(
    'module' => 'views',
    'delta' => 'event-influ_global_image',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '5',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-global_event-block'] = array(
    'module' => 'views',
    'delta' => 'global_event-block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '6',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block'] = array(
    'module' => 'views',
    'delta' => 'homepage-block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '7',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block_1'] = array(
    'module' => 'views',
    'delta' => 'homepage-block_1',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '8',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influ_pages_header-block_1'] = array(
    'module' => 'views',
    'delta' => 'influ_pages_header-block_1',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '9',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block'] = array(
    'module' => 'views',
    'delta' => 'influencer-block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '12',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block_1'] = array(
    'module' => 'views',
    'delta' => 'influencer-block_1',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '11',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-ministry-block'] = array(
    'module' => 'views',
    'delta' => 'ministry-block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '13',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-vc_content_admin-block_1'] = array(
    'module' => 'views',
    'delta' => 'vc_content_admin-block_1',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '3',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-video-block'] = array(
    'module' => 'views',
    'delta' => 'video-block',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '16',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-17'] = array(
    'module' => 'webform',
    'delta' => 'client-block-17',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '18',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'concierge',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-23'] = array(
    'module' => 'webform',
    'delta' => 'client-block-23',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '22',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-25'] = array(
    'module' => 'webform',
    'delta' => 'client-block-25',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '20',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-28'] = array(
    'module' => 'webform',
    'delta' => 'client-block-28',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '24',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-29'] = array(
    'module' => 'webform',
    'delta' => 'client-block-29',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '19',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-30'] = array(
    'module' => 'webform',
    'delta' => 'client-block-30',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '17',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-31'] = array(
    'module' => 'webform',
    'delta' => 'client-block-31',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '21',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-4'] = array(
    'module' => 'webform',
    'delta' => 'client-block-4',
    'theme' => 'influencerschurch',
    'status' => 0,
    'weight' => '23',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['influencerschurch'] = $theme;

  // seven
  $theme = array();

  $theme['block-campus_copyright_menu'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'campus_copyright_menu',
  );

  $theme['block-campus_new_influencer'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'campus_new_influencer',
  );

  $theme['block-campus_dropdown_menu'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => 'Dropdown mennu',
    'cache' => -1,
    'machine_name' => 'campus_dropdown_menu',
  );

  $theme['block-dashboard_user_menu'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '2',
    'pages' => 'user_is_logged_in()',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'dashboard_user_menu',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-fresh-dashboard'] = array(
    'module' => 'menu',
    'delta' => 'menu-fresh-dashboard',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-homepage-news-box'] = array(
    'module' => 'menu',
    'delta' => 'menu-homepage-news-box',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-influncer-campus'] = array(
    'module' => 'menu',
    'delta' => 'menu-influncer-campus',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-social-network-link'] = array(
    'module' => 'menu',
    'delta' => 'menu-social-network-link',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'team',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-10'] = array(
    'module' => 'menu_block',
    'delta' => '10',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-11'] = array(
    'module' => 'menu_block',
    'delta' => '11',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/contents/*
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'contact
concierge',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-4'] = array(
    'module' => 'menu_block',
    'delta' => '4',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'group',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-5'] = array(
    'module' => 'menu_block',
    'delta' => '5',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-6'] = array(
    'module' => 'menu_block',
    'delta' => '6',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu_block-7'] = array(
    'module' => 'menu_block',
    'delta' => '7',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'vc/*
admin/structure/fieldable-panels-panes/view/*
node/*
user/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-8'] = array(
    'module' => 'menu_block',
    'delta' => '8',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-9'] = array(
    'module' => 'menu_block',
    'delta' => '9',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'admin
admin/*
user/*/edit
vc/dashboard
vc/contents
vc/site_settings',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['vc_content-campus_address'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_address',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_event_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_event_page_title',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_ministry_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_ministry_page_title',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-campus_services'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_services',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_content-campus_team_page_title'] = array(
    'module' => 'vc_content',
    'delta' => 'campus_team_page_title',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['vc_content-current_campus_menu'] = array(
    'module' => 'vc_content',
    'delta' => 'current_campus_menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['vc_remote_view-global_event_block'] = array(
    'module' => 'vc_remote_view',
    'delta' => 'global_event_block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views-2c4f8e6db5a7dbc2993104a1c59bf960'] = array(
    'module' => 'views',
    'delta' => '2c4f8e6db5a7dbc2993104a1c59bf960',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-34660a18b89979db19eb40e98f4bbdb2'] = array(
    'module' => 'views',
    'delta' => '34660a18b89979db19eb40e98f4bbdb2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-de262bbb41b1cf4bb341801c16fb3f54'] = array(
    'module' => 'views',
    'delta' => 'de262bbb41b1cf4bb341801c16fb3f54',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-block'] = array(
    'module' => 'views',
    'delta' => 'event-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-event-influ_global_image'] = array(
    'module' => 'views',
    'delta' => 'event-influ_global_image',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-global_event-block'] = array(
    'module' => 'views',
    'delta' => 'global_event-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block'] = array(
    'module' => 'views',
    'delta' => 'homepage-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-homepage-block_1'] = array(
    'module' => 'views',
    'delta' => 'homepage-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influ_pages_header-block_1'] = array(
    'module' => 'views',
    'delta' => 'influ_pages_header-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block'] = array(
    'module' => 'views',
    'delta' => 'influencer-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-influencer-block_1'] = array(
    'module' => 'views',
    'delta' => 'influencer-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-ministry-block'] = array(
    'module' => 'views',
    'delta' => 'ministry-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-vc_content_admin-block_1'] = array(
    'module' => 'views',
    'delta' => 'vc_content_admin-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-video-block'] = array(
    'module' => 'views',
    'delta' => 'video-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-17'] = array(
    'module' => 'webform',
    'delta' => 'client-block-17',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'concierge',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-23'] = array(
    'module' => 'webform',
    'delta' => 'client-block-23',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-25'] = array(
    'module' => 'webform',
    'delta' => 'client-block-25',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-28'] = array(
    'module' => 'webform',
    'delta' => 'client-block-28',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-29'] = array(
    'module' => 'webform',
    'delta' => 'client-block-29',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-30'] = array(
    'module' => 'webform',
    'delta' => 'client-block-30',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-31'] = array(
    'module' => 'webform',
    'delta' => 'client-block-31',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['webform-client-block-4'] = array(
    'module' => 'webform',
    'delta' => 'client-block-4',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
