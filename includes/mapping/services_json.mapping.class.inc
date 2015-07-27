<?php

/**
 * @file
 * Contains mapping for different service providers.
 */



/**
 * Class ServiceJsonServiceMapping
 */
class ServicesJsonServiceMapping {

  /**
   * @param $service
   * @param $server
   *
   * @return ServicesJsonItemInterface[]
   *   An array of items.
   */
  public static function createFromEndpoint($service, $server) {
    $services = array();
    foreach ($service->resources as $resource_name => $resource) {
      foreach ($resource['actions'] as $operation_name => $operation) {
        $name_parts = array(
          'services',
          $service->name,
          $resource_name,
          $operation_name
        );
        $values = array(
          'name' => implode('_', $name_parts),
          'description' => 'define please',
          'domain' => $service->name,
          'endpoint' => array(
            'location' => 'todo',
            'protocol' => 'todo',
            'contract_type' => 'todo',
          ),
          'environment' => 'todo',
        );
        $services[] = ServicesJsonItem::create($values);
      }
    }
    return $services;
  }

}

