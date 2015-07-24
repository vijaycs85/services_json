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
  public function getId();

  public function getDescription();

  public function getDomain();

  public function getEndpointLocation();

  public function getEndpointProtocol();

  public function getEndpointContactType();

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
