<?php
/**
 * @file
 * teaser.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teaser_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function teaser_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function teaser_node_info() {
  $items = array(
    'teaser' => array(
      'name' => t('teaser'),
      'base' => 'node_content',
      'description' => t('teaser - slider '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}