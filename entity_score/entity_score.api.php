<?php
/**
 * @file
 * Entity Score module hooks.
 *
 * @todo Add example usage of "operations" array in boost declaration.
 * @todo Add example usage of "settings" array in boost declaration.
 * @todo Add example usage of "features" array in boost declaration.
 * @todo Add example usage of dynamic boost calculation (maybe a shortened
 *       version of entity_score_search_api_solr_query_alter function).
 */

/**
 * @addtogroup hooks
 * @{
 */

// @ignore production_code:50
/**
 * Returns list of boosts available to configure via administrative UI.
 *
 * @return array
 *   List of boosts, e.g.:
 * @code
 *   array(
 *      // Machine name of the boosts group.
 *     'my_builtin_fields' => array(
 *       // Title of the boosts group.
 *       'title' => t('My built-in fields'),
 *
 *       // An array of boost declarations.
 *       'boosts' => array(
 *         // Machine name of boost declaration.
 *         'title_per_character' => array(
 *           // Type may be also ENTITY_SCORE_BOOST_TYPE_CALLBACK, so third
 *           // parameter to boost callback function will be a reference to
 *           // final score value.
 *           'type' => ENTITY_SCORE_BOOST_TYPE_NORMAL,
 *
 *           // Title of the field that is used to compute boost.
 *           'field_title' => t('Title'),
 *
 *           // Description of boost functionality.
 *           'boost_title' => t('Per character'),
 *
 *           // Default value for boost, may be skipped for 0.
 *           'default_value' => 0.05,
 *
 *           // Bundles may be defined also as e.g.,:
 *           // array('node' => array('advert', ...), ...)
 *           'bundles' => array('node'),
 *
 *           // Callback function, e.g.,
 *           // callback($entity, $entity_type, &$score)
 *           // Third parameter is required only for boost with type
 *           // ENTITY_SCORE_BOOST_TYPE_CALLBACK
 *           'function' =>
 *             '_calculate_my_builtin_fields_title_per_character',
 *         ),
 *         // ...
 *       ),
 *     // ...
 *   )
 * @endcode
 *
 * @ingroup entity_score
 */
function hook_entity_score_entity_score_boosts_list() {
  return array(
    'my_builtin_fields' => array(
      'title' => t('My built-in fields'),
      'boosts' => array(
        'title_per_character' => array(
          'type' => ENTITY_SCORE_BOOST_TYPE_NORMAL,
          'field_title' => t('Title'),
          'boost_title' => t('Per character'),
          'bundles' => array('node'),
          'function' => '_calculate_my_builtin_fields_title_per_character',
        ),
      ),
    ),
  );
}

/**
 * Boost field callback. Returns field's "quantity".
 *
 * @param object $entity
 *   Entity to operate on.
 *
 * @param string $entity_type
 *   Type of entity.
 *
 * @param float $score
 *   Reference to final score. Used for boosts of type
 *   ENTITY_SCORE_BOOST_TYPE_CALLBACK.
 *
 * @return float
 *   Number of characters in the body field.
 *
 * @ingroup entity_score
 */
function _calculate_my_builtin_fields_title_per_character($entity, $entity_type, &$score) {
  if (!isset($entity->title)) {
    // Entity doesn't contain title.
    return 0;
  }

  return strlen($entity->title);
}

/**
 * Alters final list of boost declarations.
 *
 * @param array $boosts
 *   Reference to array with boost declarations.
 *
 * @see hook_entity_score_entity_score_boosts_list()
 *
 * @ingroup entity_score
 */
function hook_entity_score_entity_score_boosts_list_alter(&$boosts) {
  $boosts['builtin_fields']['boosts']['title_per_character']['function']
    = '_calculate_builtin_fields_title_per_character_override';
}

/**
 * @} End of "addtogroup hooks".
 */
