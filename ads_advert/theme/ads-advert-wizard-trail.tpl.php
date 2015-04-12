<div class="ads-wizard-trails step-<?php echo $step; ?>-of-<?php echo count($labels); ?>">
  <?php for ($i = 0; $i < count($labels); ++$i): ?>
    <div class="label <?php if ($step == $i + 1): ?>active<?php endif; ?>"><?php echo $labels[$i]; ?></div>
  <?php endfor; ?>
</div>
