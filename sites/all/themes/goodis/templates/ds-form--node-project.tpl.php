<?php

/**
 * @file
 * Display Suite 2 column stacked form template.
 */
?>
<div class="ds-form-2col-stacked clearfix">
  <?php if ($header): ?>
    <div class="group-header<?php print $header_classes; ?>">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($left): ?>
    <div class="group-left<?php print $left_classes; ?>">
      <?php print $left; ?>
    </div>
  <?php endif; ?>

    <div class="group-right<?php print $right_classes; ?>">
	  <?php
		  $block = module_invoke('block', 'block_view', '2');
		  print $block['content'];
		?>
      <?php print $right; ?>
    </div>

  <?php if ($footer): ?>
    <div class="group-footer<?php print $footer_classes; ?>">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>
</div>


<?php
  // Print the rest of the form.
  print drupal_render_children($form);
?>
