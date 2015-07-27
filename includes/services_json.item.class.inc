<?php

/**
 * @file
 *
 */

/**
 * Class ServiceJsonItemBase
 */
class ServicesJsonItem implements ServicesJsonItemInterface {

  /**
   * @var string
   */
  protected $name;

  /**
   * @var string
   */
  protected $version;

  /**
   * @var string
   */
  protected $description;

  /**
   * @var string
   */
  protected $domain;

  /**
   * @var string
   */
  protected $endpoint;

  /**
   * @var string
   */
  protected $environment;

  public function __construct($name, $description, $domain, array $endpoint, $environment) {
    $this->name = $name;
    $this->description = $description;
    $this->domain = $domain;
    $this->endpoint = ServiceJsonEndpoint::create($endpoint);
    $this->environment = $environment;
  }

  public  static function create(array $definition) {
    return new static(
      $definition['name'],
      $definition['description'],
      $definition['domain'],
      $definition['endpoint'],
      $definition['environment']
    );
  }

  /**
   * {@inheritdoc}
   */
  public function getName() {
    return $this->name;
  }

  /**
   * {@inheritdoc}
   */
  public function setName($name) {
    $this->name = $name;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getVersion() {
    return $this->version;
  }

  /**
   * {@inheritdoc}
   */
  public function setVersion($version) {
    $this->version = $version;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getDescription() {
    return $this->description;
  }

  /**
   * {@inheritdoc}
   */
  public function setDescription($description) {
    $this->description = $description;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getDomain() {
    return $this->domain;
  }

  /**
   * {@inheritdoc}
   */
  public function setDomain($domain) {
    $this->domain = $domain;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointLocation() {
    return $this->endpoint->getLocation();
  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointProtocol() {
    return $this->endpoint->getProtocol();
  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointContractType() {
    return $this->endpoint->getContractType();
  }

  /**
   * {@inheritdoc}
   */
  public function getEnvironment() {
    return $this->environment;
  }

  /**
   * {@inheritdoc}
   */
  public function setEnvironment($environment) {
    $this->environment = $environment;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getAsArray() {
    return array(
      'name' => $this->getName(),
      'version' => $this->getVersion(),
      'description' => $this->getDescription(),
      'domain' => $this->getDomain(),
      'environment' => $this->getEnvironment(),
      'serviceEndpoints' => array (
        'url' => $this->getEndpointLocation(),
        'protocol'=> $this->getEndpointProtocol(),
        'contractType'=> $this->getEndpointContractType(),
      ),
      'serviceEnvironment' => 'QA',
      // No properties for below elements yet.
      'contacts' => array(
        'developers' => array(''),
        'business_owners' => array(''),
      ),
      'documentation' => array(
        'links' => array(''),
      ),
    );
  }

}
