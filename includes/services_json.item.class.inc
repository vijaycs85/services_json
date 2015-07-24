<?php
/**
 * @file
 * Contains classes and interfaces.
 */



/**
 * Class ServiceJsonItemBase
 */
abstract class ServicesJsonItemBase  {

  /**
   * @var string
   */
  protected $id;

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
  protected $endpointLocation;

  /**
   * @var string
   */
  protected $endpointProtocol;

  /**
   * @var string
   */
  protected $endpointContentType;

  /**
   * @var string
   */
  protected $environment;

  public function __construct($id, $description, $domain, $endpoint_location, $endpoint_protocol, $endpoint_content_type, $environment) {
    $this->id = $id;
    $this->description = $description;
    $this->domain = $domain;
    $this->endpointLocation = $endpoint_location;
    $this->endpointProtocol = $endpoint_protocol;
    $this->endpointContentType = $endpoint_content_type;
    $this->environment = $environment;
  }

  /**
   * {@inheritdoc}
   */
  public function getId() {
    return $this->id;
  }

  /**
   * {@inheritdoc}
   */
  public function setId($id) {
    $this->id = $id;
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
    return $this->endpointLocation;
  }

  /**
   * {@inheritdoc}
   */
  public function setEndpointLocation($endpointLocation) {
    $this->endpointLocation = $endpointLocation;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointProtocol() {
    return $this->endpointProtocol;
  }

  /**
   * {@inheritdoc}
   */
  public function setEndpointProtocol($endpointProtocol) {
    $this->endpointProtocol = $endpointProtocol;
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointContentType() {
    return $this->endpointContentType;
  }

  /**
   * {@inheritdoc}
   */
  public function setEndpointContentType($endpointContentType) {
    $this->endpointContentType = $endpointContentType;
    return $this;
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


  public function getAsArray() {
    return array(
      'id' => $this->getId(),
      'description' => $this->getDescription(),
      'domain' => $this->getDomain(),
      'endpoint_location' => $this->getEndpointLocation(),
      'endpoint_protocol' => $this->getEndpointProtocol(),
      'endpoint_content_type' => $this->getEndpointContentType(),
      'environment' => $this->getEnvironment(),

    );
  }
}

/**
 * Class ServiceJsonServiceMapping
 */
class ServicesJsonServiceMapping extends ServicesJsonItemBase implements ServicesJsonItemInterface {


  public  static function create($values) {
    return new static(
      $values['id'],
      $values['description'],
      $values['domain'],
      $values['endpoint_location'],
      $values['endpoint_protocol'],
      $values['endpoint_content_type'],
      $values['environment']
    );
  }

  public static function createFromEndpoint($service, $server) {
    foreach ($service->resources as $resource_id => $resource) {
      foreach ($resource['operations'] as $operation_id => $operation) {
        $id_parts = array(
          'services',
          $service->name,
          $resource_id,
          $operation_id
        );
        $values = array(
          'id' => implode('_', $id_parts),
          'description' => 'define please',
          'domain' => 'SERVICES',
          'endpoint_location' => 'todo',
          'endpoint_protocol' => 'todo',
          'endpoint_content_type' => 'todo',
          'environment' => 'todo',
        );
        $services[] = self::create($values);
      }
    }
    return $services;
  }

  /**
   * {@inheritdoc}
   */
  public function getId() {

  }

  /**
   * {@inheritdoc}
   */
  public function getDescription() {

  }

  /**
   * {@inheritdoc}
   */
  public function getDomain() {

  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointLocation() {

  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointProtocol() {

  }

  /**
   * {@inheritdoc}
   */
  public function getEndpointContactType() {

  }

  /**
   * {@inheritdoc}
   */
  public function getEnvironment() {

  }

}
