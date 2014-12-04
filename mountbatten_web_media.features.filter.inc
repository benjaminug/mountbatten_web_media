<?php
/**
 * @file
 * mountbatten_web_media.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function mountbatten_web_media_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd><pre><u>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'picture' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'spamspan' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'media_filter' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
