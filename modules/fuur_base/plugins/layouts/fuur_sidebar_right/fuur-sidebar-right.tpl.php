<?php
/**
 * @file
 * Site Template layout for Panels Everywhere.
 */
?>
<div class="fuur-layout-sidebar-right">

  <div class="layout-main">
    <?php print render($content['main']); ?>
  </div>

  <div class="layout-sidebar">
    <?php print render($content['sidebar']); ?>
  </div>

</div>
