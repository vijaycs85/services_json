<?php
/**
 * @file
 * Contains classes and interfaces.
 */

/**
 * Interface ServiceJsonItemInterface
 */
interface ServicesJsonItemInterface {

  /**
   * @return mixed
   */
  public function getId();

  public function getDescription();

  public function getDomain();

  public function getEndpointLocation();

  public function getEndpointProtocol();

  public function getEndpointContactType();

  public function getEnvironment();

}


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

}

/**
 * Class ServiceJsonServiceMapping
 */
class ServicesJsonServiceMapping extends ServicesJsonItemBase implements ServicesJsonItemInterface {


  public static function create($values) {
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
