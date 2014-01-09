<?php

/**
 * @file
 * Location selection template.
 *
 * Source variables:
 *   - array tree
 */

?>
<div class="module-ads-locations">

  <?php foreach ($tree as $country_tid => $country): ?>

    <div>

      <div class="country-title">
        <span class="title">
          <?php print $country['title']; ?>
        </span>
        <span class="arrow"></span>
      </div>

      <div class="regions">
        <?php foreach ($country['children'] as $region_tid => $region): ?>

          <div>

            <div class="region-title">
              <?php print $region['title']; ?>
              <span class="arrow"></span>
            </div>

            <div class="cities">
              <?php foreach ($region['children'] as $city_tid => $city): ?>

                <div class="city-title">
                  <?php print l($city['title'], $city['url']); ?>
                </div>

              <?php endforeach; ?>
            </div>

          </div>

        <?php endforeach; ?>
      </div>

    </div>

  <?php endforeach; ?>

</div>