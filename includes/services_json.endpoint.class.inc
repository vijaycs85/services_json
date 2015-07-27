<?php

/**
 * @file
 *
 */

class ServiceJsonEndpoint {

  protected $location;
  protected $protocol;
  protected $contractType;

  protected function __construct($location, $protocol, $contract_type) {
    $this->location = $location;
    $this->protocol = $protocol;
    $this->contractType = $contract_type;
  }

  /**
   * Creates new object.
   *
   * @param array $definition
   *
   * @return static
   *   New object.
   */
  public static function create(array $definition) {
    return new static(
      $definition['location'],
      $definition['protocol'],
      $definition['contract_type']
    );
  }

  /**
   * @return mixed
   */
  public function getLocation() {
    return $this->location;
  }

  /**
   * @param mixed $location
   *
   * @return $this
   */
  public function setLocation($location) {
    $this->location = $location;
    return $this;
  }

  /**
   * @return mixed
   */
  public function getProtocol() {
    return $this->protocol;
  }

  /**
   * @param mixed $protocol
   *
   * @return $this
   */
  public function setProtocol($protocol) {
    $this->protocol = $protocol;
    return $this;
  }

  /**
   * @return mixed
   */
  public function getContractType() {
    return $this->contractType;
  }

  /**
   * @param mixed $contractType
   *
   * @return $this
   */
  public function setContractType($contractType) {
    $this->contractType = $contractType;
    return $this;
  }


}