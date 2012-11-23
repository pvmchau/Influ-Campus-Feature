<?php
/**
 * @file
 * campus_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function campus_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-fresh-dashboard.
  $menus['menu-fresh-dashboard'] = array(
    'menu_name' => 'menu-fresh-dashboard',
    'title' => 'Fresh Dashboard',
    'description' => '',
  );
  // Exported menu: menu-homepage-news-box.
  $menus['menu-homepage-news-box'] = array(
    'menu_name' => 'menu-homepage-news-box',
    'title' => 'Homepage news box',
    'description' => '',
  );
  // Exported menu: menu-social-network-link.
  $menus['menu-social-network-link'] = array(
    'menu_name' => 'menu-social-network-link',
    'title' => 'Social network link',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Fresh Dashboard');
  t('Homepage news box');
  t('Main menu');
  t('Social network link');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
