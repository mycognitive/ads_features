<div class="ads-homepage-category-group masonry-item">
  <?php if (!empty($title)): ?>
    <span class="title">
      <?php print $icon; ?>
      <?php print $title; ?>
    </span>
  <?php endif; ?>
  <ul>
    <?php foreach ($rows as $id => $row): ?>
      <li><?php print $row; ?></li>
    <?php endforeach; ?>
  </ul>
</div>
