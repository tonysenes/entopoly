<?php
/**
 * @file
 * entercom_personality.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function entercom_personality_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function entercom_personality_node_info() {
  $items = array(
    'personality' => array(
      'name' => t('Personality'),
      'base' => 'node_content',
      'description' => t('Details about a radio personality'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
