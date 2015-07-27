<?php
/**
 * @file
 * Drush integration for the Services Json module.
 */

/**
 * Implements hook_drush_command().
 */
function services_json_drush_command() {
  $items['services-json-generate'] = array(
    'callback' => 'services_json_drush_generate',
    'description' => dt('Generate service description data.'),
    'aliases' => array('service-gen'),

  );
  return $items;
}

/**
 * Generate service description
 */
function services_json_drush_generate() {

  return services_json_get_list();
}
