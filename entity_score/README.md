INSTALLATION
============

Simply download and enable the module, you may do it via:

```
drush dl entity_score
drush en entity score
```

CONFIGURATION
=============

Please go to __/admin/config/entity_score/boosts__ and choose field used to store entity score. The field must be of type __Float__ and may be used across several entity/node types. Scores will be automatically updated when entities are created/saved.


YOUR OWN BOOSTS
===============

In order to create custom boosts you need to do two things:

* Provide *hook_entity_score_entity_score_boosts_list* function which returns list of boosts you'd like to support (our boost will use *_calculate_my_builtin_fields_title_per_character* as the callback function which should return quantity which will then be multiplied by boost value provided by user. Look at the example for clarification.

  Example:

  ```
  function mymodule_entity_score_entity_score_boosts_list() {

    // Machine name of the boosts group.
    'my_builtin_fields' => array(

    // Title of the boosts group.
    'title' => t('My built-in fields'),

    // An array of boost declarations.
    'boosts' => array(

      // Machine name of boost declaration.
      'title_per_character' => array(

        // Type may be also ENTITY_SCORE_BOOST_TYPE_CALLBACK, so third
        // parameter to boost callback function will be a reference to
        // final score value.
        'type' => ENTITY_SCORE_BOOST_TYPE_NORMAL,

        // Title of the field that is used to compute boost.
        'field_title' => t('Title'),

        // Description of boost functionality.
        'boost_title' => t('Per character'),

        // Default value for boost, may be skipped for 0.
        'default_value' => 0.05,

        // Bundles may be defined also as e.g.,
        // array('node' => array('advert', ...), ...)
        'bundles' => array('node'),

        // Callback function, e.g.,
        // callback($entity, $entity_type, &$score)
        // Third parameter is required only for boost with type
        // ENTITY_SCORE_BOOST_TYPE_CALLBACK
        'function' =>
          '_calculate_my_builtin_fields_title_per_character',
      ),
      // ...
    ),
    // ...
}
  ```

* Provide callback function declared in boost declaration ('function'). In our example it is _calculate_my_builtin_fields_title_per_character.

  Example:

  ```
  function _calculate_my_builtin_fields_title_per_character($entity, $entity_type, &$score) {
    if (!isset($entity->title)) {
      // Entity doesn't contain title.
      return 0;
    }

    return strlen($entity->title);
  }
  ```

That's all. Your boost declaration is ready to be enabled.

EXPORT TO FEATURES
==================

Currently it's supported via strongarm, just export all *entity_score\** values into your module.
