<?php

/**
 * @file
 * Code for the OS2Dagsorden sidepane menu - calendar block.
 */

/**
 * Whether to show the calendar block or not, depending on the current path.
 */
function os2dagsorden_sidepane_menu_show_calendar_block() {
  $q = explode('/', $_GET['q']);
  if ($q[0] == 'calendar-field-date') {
    return FALSE;
  }
  return TRUE;
}
