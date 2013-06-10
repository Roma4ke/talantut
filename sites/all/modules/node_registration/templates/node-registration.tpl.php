<?php
/**
 * @file
 * Prints a themeable Node registration. This file exists to be overridden!
 *
 * Available variables:
 * - object $node -- the 'owner' of this registration
 * - object $registration -- the registration details
 * - array  $content -- the renderable display mode result
 * - array  $node_content -- the renderable content for the $node
 * - array  $cancel -- a renderable link to the cancel page
 */
?>

<div class="<?php print $classes; ?>" <?php print $attributes; ?>>

  <!-- node details -->
  <p class="node-registration-event-name"><?php print t('Event name'); ?>: <?php print render($node_content['title']) ?></p>

  <!-- registration details -->
  <p class="node-registration-user"><?php print t('User'); ?>: <?php print (int) $registration->uid; ?> / <?php print $registration->email; ?></p>
  <p><?php print t('Author'); ?>: <?php print $registration->author_uid; ?></p>
  <p><?php print t('Slots'); ?>: <?php print $registration->slots; ?></p>
  <p><?php print t('Attended'); ?>: <?php print $registration->attended; ?></p>

  <!-- from preprocesses -->
  <?php print render($content); ?>

  <!-- cancel link -->
  <?php print render($cancel); ?>

</div>
