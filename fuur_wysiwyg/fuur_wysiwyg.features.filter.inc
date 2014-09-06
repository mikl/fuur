<?php
/**
 * @file
 * fuur_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function fuur_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Füür WYSIWYG.
  $formats['fuur_wysiwyg'] = array(
    'format' => 'fuur_wysiwyg',
    'name' => 'Füür WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h1> <h2> <h3> <h4> <h5> <h6> <em> <strong> <code> <del> <blockquote> <q> <sub> <p> <br> <pre> <ul> <ol> <li> <dl> <dt> <dd> <a> <b> <u> <i> <sup> <img> <table> <tbody> <td> <th> <tr>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
