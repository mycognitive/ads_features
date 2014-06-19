<?php
/**
 * ADS Score module hooks.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Calulates score for a given node.
 *
 * Score is based on boosts returned from hook_ads_entity_score($node). Every
 * hook checks node fields for score and returns final boost ratio. Boost may be
 * less than 0, 0 or greather that 0, so final boost may be negative, may stay
 * as it is or be  positive. E.g. for a long title you may boost node with 1.0,
 * however for a long description you may boost node with 4.0 as description is
 * more important.
 *
 * The final score is a sum of all boosts returned from hook_ads_entity_score().
 *
 * You may use static/hardcoded values for boost or provide a list of
 * configurable boosts -- boost name -> value so boost values may be modified by
 * user via administrative UI at /admin/config/ads_score. If you'd like to have
 * configurable boosts, take a look to hook_entity_score_boosts(). You can
 * determine currect boost via ads_score_entity_score_get_boost_value(), e.g.:
 *
 *   return ads_score_entity_score_get_boost_value(
 *     'my_module', 'boost_for_long_title'
 *   );
 *
 * @param stdClass $node
 *   Node to calculate boost for.
 *
 * @return float
 *   Boost ratio, 0 for no boost, negative or positive value to change boost.
 *
 * @see hook_ads_score_entity_score_boosts()
 *
 * @ingroup ads_score
 */
function hook_ads_score_entity_score_calculate($node)
{
  // Every character in title will add 0.05 to the final boost.
  return strlen($node -> title) * 0.05;
}

/**
 * Returns list of boosts available to configure via administrative UI.
 *
 * Boost values may be determined via ads_score_entity_score_get_boost_value().
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
 *           // Type may be also ADS_SCORE_BOOST_TYPE_CALLBACK, so third
 *           // parameter to boost callback function will be a reference to
 *           // final score value.
 *           'type' => ADS_SCORE_BOOST_TYPE_NORMAL,
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
 *           // Bundles may be defined also as e.g.:
 *           // array('node' => array('advert', ...), ...)
 *           'bundles' => array('node'),
 *
 *           // Callback function, e.g. callback($entity, $entity_type, &$score)
 *           // Third parameter is required only for boost with type
 *           // ADS_SCORE_BOOST_TYPE_CALLBACK
 *           'function' => 'hook_calculate_my_builtin_fields_title_per_character',
 *         ),
 *         // ...
 *       ),
 *     // ...
 *   )
 * @endcode
 *
 * @ingroup ads_score
 */
function hook_ads_score_entity_score_boosts_lists()
{
  return array(
    'my_builtin_fields' => array(
      'title' => t('My built-in fields'),
      'boosts' => array(
        'title_per_character' => array(
          'type' => ADS_SCORE_BOOST_TYPE_NORMAL,
          'field_title' => t('Title'),
          'boost_title' => t('Per character'),
          'bundles' => array('node'),
          'function' => 'hook_calculate_my_builtin_fields_title_per_character',
        ),
      ),
    ),
  );
}

/**
 * Boost field callback. Returns field's "quantity".
 *
 * @param stdClass $entity
 *   Entity to operate on.
 *
 * @param string $entity_type
 *   Type of entity.
 *
 * @param float $score
 *   Reference to final score. Used for boosts of type
 *   ADS_SCORE_BOOST_TYPE_CALLBACK.
 *
 * @return float
 *   Number of characters in the body field.
 */
function hook_calculate_my_builtin_fields_title_per_character($entity, $entity_type, &$score) {
}

/**
 * @} End of "addtogroup hooks".
 */
