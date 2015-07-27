<?php

/**
 * @file
 * Contains interfaces.
 */

/**
 * Interface ServiceJsonItemInterface
 */
interface ServicesJsonItemInterface {

  /**
   * @return mixed
   */
  public function getName();

  public function getVersion();

  public function getDescription();

  public function getDomain();

  public function getEndpointLocation();

  public function getEndpointProtocol();

  public function getEndpointContractType();

  public function getEnvironment();

  public function getAsArray();

}


interface ServicesJsonFormatterInterface {

  /**
   * @param \ServicesJsonItemInterface $service
   * @return mixed
   */
  public function format(ServicesJsonItemInterface $service);
}
