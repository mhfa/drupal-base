<?php
/**
 * @file
 * membership.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function membership_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_commerce_payment_example'] = entity_import('rules_config', '{ "commerce_payment_commerce_payment_example" : {
      "LABEL" : "Example payment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_payment_example" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "commerce_payment_example"
          }
        }
      ]
    }
  }');
  return $items;
}
