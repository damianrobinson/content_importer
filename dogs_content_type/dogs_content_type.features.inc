<?php
/**
 * @file
 * dogs_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function dogs_content_type_node_info() {
  $items = array(
    'dog' => array(
      'name' => t('Dog'),
      'base' => 'node_content',
      'description' => t('Information about dogs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
