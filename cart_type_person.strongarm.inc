<?php
/**
 * @file
 * cart_type_person.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cart_type_person_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cart_person';
  $strongarm->value = 0;
  $export['comment_anonymous_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cart_person';
  $strongarm->value = '1';
  $export['comment_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cart_person';
  $strongarm->value = 1;
  $export['comment_default_mode_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cart_person';
  $strongarm->value = '50';
  $export['comment_default_per_page_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cart_person';
  $strongarm->value = 1;
  $export['comment_form_location_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cart_person';
  $strongarm->value = '1';
  $export['comment_preview_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cart_person';
  $strongarm->value = 1;
  $export['comment_subject_field_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_cart_person';
  $strongarm->value = '1';
  $export['content_complete_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_complete_fields_cart_person';
  $strongarm->value = array(
    0 => 'title',
    1 => 'body',
    2 => 'field_cart_image',
  );
  $export['content_complete_fields_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__cart_person';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'cart_vmode_minimal' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cart_person';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cart_person';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cart_person';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cart_person';
  $strongarm->value = '1';
  $export['node_preview_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cart_person';
  $strongarm->value = 0;
  $export['node_submitted_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_cart_person';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'cart_vmode_minimal' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_cart_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_person_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:26:"panelizer_node:cart_person";s:23:"allowed_layout_settings";a:9:{s:8:"flexible";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:14:"twocol_stacked";b:1;s:6:"onecol";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:cart_person_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_person_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:cart_person_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_person_allowed_types';
  $strongarm->value = array(
    'user_profile-user_profile' => 'user_profile-user_profile',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'form-form' => 'form-form',
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'search_result-search_result' => 'search_result-search_result',
    'search_form-search_form' => 'search_form-search_form',
    'node_comment_form-node_comment_form' => 'node_comment_form-node_comment_form',
    'node_comments-node_comments' => 'node_comments-node_comments',
    'node_author-node_author' => 'node_author-node_author',
    'node_title-node_title' => 'node_title-node_title',
    'node_links-node_links' => 'node_links-node_links',
    'node_created-node_created' => 'node_created-node_created',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_body-node_body' => 'node_body-node_body',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_content-node_content' => 'node_content-node_content',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_comment-node_form_comment' => 'node_form_comment-node_form_comment',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_language-node_form_language' => 'node_form_language-node_form_language',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'term_list-term_list' => 'term_list-term_list',
    'term_description-term_description' => 'term_description-term_description',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_title-page_title' => 'page_title-page_title',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_help-page_help' => 'page_help-page_help',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'comment_reply_form-comment_reply_form' => 'comment_reply_form-comment_reply_form',
    'node-node' => 'node-node',
    'views_empty-views_empty' => 'views_empty-views_empty',
    'views_header-views_header' => 'views_header-views_header',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'views_row-views_row' => 'views_row-views_row',
    'views_exposed-views_exposed' => 'views_exposed-views_exposed',
    'views_footer-views_footer' => 'views_footer-views_footer',
    'views_attachments-views_attachments' => 'views_attachments-views_attachments',
    'views_feed-views_feed' => 'views_feed-views_feed',
    'views_view-views_view' => 'views_view-views_view',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'entity_form_field-comment:comment_body' => 'entity_form_field-comment:comment_body',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_tags' => 'entity_form_field-node:field_tags',
    'entity_form_field-node:field_image' => 'entity_form_field-node:field_image',
    'entity_form_field-node:field_cart_artist' => 'entity_form_field-node:field_cart_artist',
    'entity_form_field-node:field_cart_curator' => 'entity_form_field-node:field_cart_curator',
    'entity_form_field-node:field_cart_date' => 'entity_form_field-node:field_cart_date',
    'entity_form_field-node:field_cart_exhibit_type' => 'entity_form_field-node:field_cart_exhibit_type',
    'entity_form_field-node:field_cart_image' => 'entity_form_field-node:field_cart_image',
    'entity_form_field-node:field_cart_main_exhibit' => 'entity_form_field-node:field_cart_main_exhibit',
    'entity_form_field-node:field_cart_media_types' => 'entity_form_field-node:field_cart_media_types',
    'entity_form_field-node:field_cart_sponsor' => 'entity_form_field-node:field_cart_sponsor',
    'entity_form_field-node:field_cart_venue' => 'entity_form_field-node:field_cart_venue',
    'entity_form_field-node:field_cart_image_url' => 'entity_form_field-node:field_cart_image_url',
    'entity_form_field-node:field_cart_org_type' => 'entity_form_field-node:field_cart_org_type',
    'entity_form_field-node:field_cart_location' => 'entity_form_field-node:field_cart_location',
    'entity_form_field-node:field_cart_geolocation' => 'entity_form_field-node:field_cart_geolocation',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'entity_field-comment:comment_body' => 'entity_field-comment:comment_body',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_tags' => 'entity_field-node:field_tags',
    'entity_field-node:field_image' => 'entity_field-node:field_image',
    'entity_field-node:field_cart_artist' => 'entity_field-node:field_cart_artist',
    'entity_field-node:field_cart_curator' => 'entity_field-node:field_cart_curator',
    'entity_field-node:field_cart_date' => 'entity_field-node:field_cart_date',
    'entity_field-node:field_cart_exhibit_type' => 'entity_field-node:field_cart_exhibit_type',
    'entity_field-node:field_cart_image' => 'entity_field-node:field_cart_image',
    'entity_field-node:field_cart_main_exhibit' => 'entity_field-node:field_cart_main_exhibit',
    'entity_field-node:field_cart_media_types' => 'entity_field-node:field_cart_media_types',
    'entity_field-node:field_cart_sponsor' => 'entity_field-node:field_cart_sponsor',
    'entity_field-node:field_cart_venue' => 'entity_field-node:field_cart_venue',
    'entity_field-node:field_cart_image_url' => 'entity_field-node:field_cart_image_url',
    'entity_field-node:field_cart_org_type' => 'entity_field-node:field_cart_org_type',
    'entity_field-node:field_cart_location' => 'entity_field-node:field_cart_location',
    'entity_field-node:field_cart_geolocation' => 'entity_field-node:field_cart_geolocation',
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:comment-count' => 'token-node:comment-count',
    'token-node:comment-count-new' => 'token-node:comment-count-new',
    'token-node:diff' => 'token-node:diff',
    'token-node:diff-markdown' => 'token-node:diff-markdown',
    'token-node:feed-source' => 'token-node:feed-source',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:original' => 'token-node:original',
    'token-node:field_tags' => 'token-node:field_tags',
    'token-node:field_image' => 'token-node:field_image',
    'token-node:field_cart_artist' => 'token-node:field_cart_artist',
    'token-node:field_cart_curator' => 'token-node:field_cart_curator',
    'token-node:field_cart_date' => 'token-node:field_cart_date',
    'token-node:field_cart_exhibit_type' => 'token-node:field_cart_exhibit_type',
    'token-node:field_cart_image' => 'token-node:field_cart_image',
    'token-node:field_cart_main_exhibit' => 'token-node:field_cart_main_exhibit',
    'token-node:field_cart_media_types' => 'token-node:field_cart_media_types',
    'token-node:field_cart_org_type' => 'token-node:field_cart_org_type',
    'token-node:field_cart_sponsor' => 'token-node:field_cart_sponsor',
    'token-node:field_cart_venue' => 'token-node:field_cart_venue',
    'token-node:field_cart_location' => 'token-node:field_cart_location',
    'token-node:field_cart_geolocation' => 'token-node:field_cart_geolocation',
    'token-node:field_cart_image_url' => 'token-node:field_cart_image_url',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:original' => 'token-term:original',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:original' => 'token-file:original',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:picture' => 'token-user:picture',
    'token-user:roles' => 'token-user:roles',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:original' => 'token-user:original',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-comment:cid' => 'token-comment:cid',
    'token-comment:hostname' => 'token-comment:hostname',
    'token-comment:name' => 'token-comment:name',
    'token-comment:mail' => 'token-comment:mail',
    'token-comment:homepage' => 'token-comment:homepage',
    'token-comment:title' => 'token-comment:title',
    'token-comment:body' => 'token-comment:body',
    'token-comment:url' => 'token-comment:url',
    'token-comment:edit-url' => 'token-comment:edit-url',
    'token-comment:created' => 'token-comment:created',
    'token-comment:changed' => 'token-comment:changed',
    'token-comment:parent' => 'token-comment:parent',
    'token-comment:node' => 'token-comment:node',
    'token-comment:author' => 'token-comment:author',
    'token-comment:original' => 'token-comment:original',
    'token-date-field-value:date' => 'token-date-field-value:date',
    'token-date-field-value:to-date' => 'token-date-field-value:to-date',
    'token-flag:name' => 'token-flag:name',
    'token-flag:title' => 'token-flag:title',
    'token-flagging:date' => 'token-flagging:date',
    'token-flagging:original' => 'token-flagging:original',
    'token-flag-action:action' => 'token-flag-action:action',
    'token-flag-action:entity-url' => 'token-flag-action:entity-url',
    'token-flag-action:entity-title' => 'token-flag-action:entity-title',
    'token-flag-action:entity-type' => 'token-flag-action:entity-type',
    'token-flag-action:entity-id' => 'token-flag-action:entity-id',
    'token-flag-action:count' => 'token-flag-action:count',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'block-calendar-calendar_legend' => 'block-calendar-calendar_legend',
    'block-comment-recent' => 'block-comment-recent',
    'block-diff-inline' => 'block-diff-inline',
    'block-menu-features' => 'block-menu-features',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-shortcut-shortcuts' => 'block-shortcut-shortcuts',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'block-ip_geoloc-current_visitor_map' => 'block-ip_geoloc-current_visitor_map',
    'block-ip_geoloc-recent_visitors_map' => 'block-ip_geoloc-recent_visitors_map',
    'block-ip_geoloc-address_lookup' => 'block-ip_geoloc-address_lookup',
    'block-ip_geoloc-geocode_address' => 'block-ip_geoloc-geocode_address',
    'custom-custom' => 'custom-custom',
    'entity_view-comment' => 'entity_view-comment',
    'entity_view-node' => 'entity_view-node',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'flag_link-comment' => 'flag_link-comment',
    'flag_link-flagging' => 'flag_link-flagging',
    'flag_link-node' => 'flag_link-node',
    'flag_link-file' => 'flag_link-file',
    'flag_link-taxonomy_term' => 'flag_link-taxonomy_term',
    'flag_link-taxonomy_vocabulary' => 'flag_link-taxonomy_vocabulary',
    'flag_link-user' => 'flag_link-user',
    'views-cart_view_map' => 'views-cart_view_map',
    'views-cart_view_calendar2' => 'views-cart_view_calendar2',
    'views-cart_view_lists' => 'views-cart_view_lists',
    'views-cart_view_instagram' => 'views-cart_view_instagram',
    'views-cart_view_curriculum' => 'views-cart_view_curriculum',
    'views-feeds_log' => 'views-feeds_log',
    'views_panes-cart_view_map-panel_pane_1' => 'views_panes-cart_view_map-panel_pane_1',
    'views_panes-cart_view_map-panel_pane_2' => 'views_panes-cart_view_map-panel_pane_2',
    'views_panes-cart_view_calendar2-panel_pane_1' => 'views_panes-cart_view_calendar2-panel_pane_1',
    'views_panes-cart_view_instagram-panel_pane_1' => 'views_panes-cart_view_instagram-panel_pane_1',
    'views_panes-cart_view_curriculum-panel_pane_1' => 'views_panes-cart_view_curriculum-panel_pane_1',
  );
  $export['panelizer_node:cart_person_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_person_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:cart_person_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:cart_person_default';
  $strongarm->value = array(
    'entity_form_field' => 'entity_form_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'token' => 'token',
    'block' => 'block',
    'custom' => 'custom',
    'entity_view' => 'entity_view',
    'flag_link' => 'flag_link',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:cart_person_default'] = $strongarm;

  return $export;
}
