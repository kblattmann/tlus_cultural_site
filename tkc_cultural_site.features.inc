<?php

/**
 * Implementation of hook_node_info().
 */
function tkc_cultural_site_node_info() {
  $items = array(
    'cultural_site' => array(
      'name' => t('Cultural Site'),
      'module' => 'features',
      'description' => t('This is a content type containing cultural site information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
