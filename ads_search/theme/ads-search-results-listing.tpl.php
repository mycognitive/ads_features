<?php

/**
 * @file
 * Search results listing template.
 *
 * Source variables:
 *   - array $items
 *     - string title
 *     - string price_amount (HTML)
 *     - string image (HTML)
 *     - string location (HTML)
 *     - string date_added (HTML)
 */

?>
<div class="ads-search-results-listing">
  <table>
    <thead>
      <tr>
        <th class="image"></th>
        <th class="description"></th>
        <th class="date-added"><?php print t('Date added'); ?></th>
        <th class="price"></th>
      </tr>
    </thead>
    <tbody>
      <?php foreach ($items as $item): ?>
        <tr class="row">
          <td class="image">
            <?php print $item['image']; ?>
          </td>
          <td class="description">
            <div class="title">
              <?php print l($item['title'], $item['url']); ?>
            </div>
            <div class="teaser">
              <?php print $item['teaser']; ?>
            </div>
            <div class="location">
              <?php print $item['location']; ?>
            </div>
          </td>
          <td class="date-added">
            <?php print $item['date_added']; ?>
          </td>
          <td class="price">
            <?php print $item['price']; ?>
          </td>
        </tr>
      <?php endforeach; ?>
    </tbody>
  </table>
</div>
