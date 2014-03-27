<?php

/**
 * @file
 * Search filters refine template.
 *
 * Source variables:
 *   - array $tree
 */

?>
<div class="ads-search-filters-refine">
  <?php foreach ($tree as $category_title => $fields): ?>
    <div class="category-title"><?php print $category_title; ?></div>
    <div class="category-content">

      <?php foreach ($fields as $field_name => $field): ?>

        <div class="field-facets-rendered">
          <?php print $field['rendered']; ?>
        </div>

      <?php endforeach; ?>

    </div>



  <?php endforeach; ?>
</div>
