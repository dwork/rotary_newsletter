<?php
/**
 * @file
 * rotary_newsletter.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function rotary_newsletter_field_default_fields() {
  $fields = array();

  // Exported field: 'node-simplenews-body'.
  $fields['node-simplenews-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'simplenews',
      'default_value' => array(
        0 => array(
          'summary' => '',
          'value' => '<h4>
	<u><strong>This Week&#39;s Meeting - 7am Wednesday Caf&eacute; Sheilagh</strong></u></h4>
<p class="rteindent1" style="margin-top: 0.6em; margin-right: 0px; margin-bottom: 1.2em; margin-left: 40px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; ">&lt;date&gt; : Speaker : Subject</p>
<blockquote>
	<p class="rteindent2" style="margin-top: 0.6em; margin-right: 0px; margin-bottom: 1.2em; margin-left: 0px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; ">Greeter: &lt;Rotarian&gt;</p>
</blockquote>
<h4>
	<u><strong>Last Week&#39;s Meeting(s)</strong></u></h4>
<p class="rteindent1" style="margin-top: 0.6em; margin-right: 0px; margin-bottom: 1.2em; margin-left: 40px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; ">&lt;date&gt; : Speaker : Subject</p>
<h4>
	<u><strong>Upcoming Meetings and Events</strong></u></h4>
<p class="rteindent1" style="margin-top: 0.6em; margin-right: 0px; margin-bottom: 1.2em; margin-left: 40px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; ">&lt;date&gt; : Speaker : Subject</p>
<h4>
	<u><strong>Members in the News</strong></u></h4>
<p class="rteindent1" style="margin-top: 0.6em; margin-right: 0px; margin-bottom: 1.2em; margin-left: 40px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; ">&lt;news item&gt;</p>
<p class="rteindent1" style="margin-top: 0.6em; margin-right: 0px; margin-bottom: 1.2em; margin-left: 40px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; "><em><strong>NEWS ITEMS WANTED -- send items of interest to&nbsp;<a href="mailto:webmaster@southvalleyrotary.org" style="color: rgb(2, 122, 198); text-decoration: none; ">webmaster@southvalleyrotary.org</a>.</strong></em></p>
<h4>
	<u><strong>&lt;month&gt; Birthdays</strong></u></h4>
<p class="rteindent1" style="margin-top: 0.6em; margin-right: 0px; margin-bottom: 1.2em; margin-left: 40px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; ">&lt;Rotarian name&gt; mm-dd</p>
<h4>
	<u><strong>President&#39;s Message</strong></u></h4>
<p>&nbsp;</p>
',
          'format' => 'full_html',
        ),
      ),
      'deleted' => '0',
      'description' => 'The "body" of the newsletter. ',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-simplenews-field_newsletter_footer'.
  $fields['node-simplenews-field_newsletter_footer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_newsletter_footer',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'simplenews',
      'default_value' => array(
        0 => array(
          'value' => '<p class="rtecenter">------------------------------------------------------------------------------------------------------------------------------------------------------------------</p>
<table align="center" border="1" cellpadding="1" cellspacing="1">
	<caption>
		Rotary Meetings in our Area (Interact adjourned for the summer)</caption>
	<thead>
		<tr>
			<th scope="col">
				Monday</th>
			<th scope="col">
				Tuesday</th>
			<th scope="col">
				Wednesday</th>
			<th scope="col">
				Thursday</th>
			<th scope="col">
				Friday</th>
		</tr>
	</thead>
	<tbody>
		<tr valign="top">
			<td>
				<p>Eugene Emerald<br />
					Noon Valley River Inn</p>
				<p>McKenzie After 5<br />
					5:30pm Mookies Northwest Grill</p>
			</td>
			<td>
				<p>Eugene Rotary<br />
					Noon Eugene Hilton</p>
				<p>Eugene Metro<br />
					5:30 Davis Restaurant</p>
			</td>
			<td>
				<p><strong>South Valley Rotary<br />
					7am Village Green Resort</strong></p>
				<div>
					Springfield Rotary<br />
					Noon Holiday Inn</div>
				<p>Eugene Mid Valley<br />
					Noon Valley River Inn</p>
			</td>
			<td>
				<p>Eugene Airport<br />
					7:30am Wings Cafe</p>
				<p><strong>Cottage Grove Rotary<br />
					Noon Stacy&#39;s Restaurant</strong></p>
				<p>Eugene Southtowne<br />
					Noon Veterans Memorial Bldg</p>
			</td>
			<td>
				<p>Eugene Delta<br />
					Noon River Ranch Restaurant</p>
				<p>Springfield Twin Rivers<br />
					6:45am Royal Caribbean Facility</p>
			</td>
		</tr>
	</tbody>
</table>
<p>&nbsp;</p>
<table border="0" cellpadding="10" cellspacing="10">
	<caption>
		South Valley Rotary Club, chartered December 31, 2010</caption>
	<tbody>
		<tr>
			<td>
				<p>President: Martin Fisher<br />
					President Elect: ??<br />
					&nbsp;Secretary: Jack West<br />
					Treasurer: Robert Ball<br />
					Sergeant at Arms: ??<br />
					Past President: Teresa Martindale</p>
			</td>
			<td>
				<p>Rotary Foundation: Don Armstrong<br />
					KITS: Lori Bass and Nancy Wales<br />
					Duck Race: Marc and Lori Bass<br />
					Ryla: Teresa Martindale<br />
					Four Way Test: Teresa Martindale<br />
					Webmaster: David Work</p>
			</td>
		</tr>
	</tbody>
</table>
<p class="rtecenter">Send newsletter articles and corrections to webmaster@southvalleyrotary.org</p>
',
          'format' => 'full_html',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_newsletter_footer',
      'label' => 'Newsletter Footer',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-simplenews-field_newsletter_header'.
  $fields['node-simplenews-field_newsletter_header'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_newsletter_header',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'simplenews',
      'default_value' => array(
        0 => array(
          'value' => '<p style="margin: 0.0px 0.0px 0.0px 0.0px; font: 12.0px Helvetica">&nbsp;</p>
<table border="0" cellpadding="1" cellspacing="1" style="width: 100%; ">
	<tbody>
		<tr>
			<td>
				<img alt="" src="/sites/all/themes/omega_rotary/logo.png" style="border-top-style: none; border-right-style: none; border-bottom-style: none; border-left-style: none; border-width: initial; border-color: initial; float: left; width: 120px; height: 120px; " /></td>
			<td>
				<center>
					<h1>
						<strong>South Valley Rotary Club<br />
						Weekly Newsletter</strong></h1>
					<address>
						&quot;Service Above Self&quot; &nbsp;</address>
					<br />
					<address>
						http://www.southvalleyrotoary.org</address>
				</center>
			</td>
			<td>
				<center>
					<h1 class="rtecenter" style="margin-top: 0px; margin-right: 0px; margin-bottom: 0px; margin-left: 0px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; font-weight: normal; font-family: Helvetica, Arial, sans-serif; font-size: 20px; text-align: center; ">
						<img alt="" src="/sites/all/themes/omega_rotary/logo.png" style="width: 109px; height: 100px; " /></h1>
				</center>
			</td>
		</tr>
	</tbody>
</table>
<center>
	<h1 class="rtecenter">
		&nbsp;</h1>
</center>
',
          'format' => 'full_html',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_newsletter_header',
      'label' => 'Newsletter Header',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-simplenews-field_simplenews_term'.
  $fields['node-simplenews-field_simplenews_term'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_simplenews_term',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'newsletter',
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'simplenews',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '0',
        ),
        'email_html' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'email_plain' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'email_textalt' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_simplenews_term',
      'label' => 'Newsletter category',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Newsletter Footer');
  t('Newsletter Header');
  t('Newsletter category');
  t('The "body" of the newsletter. ');

  return $fields;
}
