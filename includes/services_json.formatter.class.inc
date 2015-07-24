<?php


/**
 * Class ServiceJsonServiceMapping
 */
class ServicesJsonJsonFormatter implements ServicesJsonFormatterInterface {

  public function format(ServicesJsonItemInterface $service) {
    return json_encode($service->getArray());
  }

}
