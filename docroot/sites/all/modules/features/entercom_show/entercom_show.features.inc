<?php
/**
 * @file
 * entercom_show.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function entercom_show_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function entercom_show_node_info() {
  $items = array(
    'shows' => array(
      'name' => t('Shows'),
      'base' => 'node_content',
      'description' => t('Details about a show'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
