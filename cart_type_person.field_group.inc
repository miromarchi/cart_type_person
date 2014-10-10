<?php
/**
 * @file
 * cart_type_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cart_type_person_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_links|node|cart_person|form';
  $field_group->group_name = 'group_cart_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'Web links',
    'weight' => '11',
    'children' => array(
      0 => 'field_cart_blog_link',
      1 => 'field_cart_links_web',
      2 => 'field_cart_rss_link',
      3 => 'field_cart_wikipedia_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Web links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_cart_links|node|cart_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_social|node|cart_person|form';
  $field_group->group_name = 'group_cart_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'Social links',
    'weight' => '12',
    'children' => array(
      0 => 'field_cart_facebook_link',
      1 => 'field_cart_flickr_link',
      2 => 'field_cart_google_link',
      3 => 'field_cart_instagram_link',
      4 => 'field_cart_linkedin_link',
      5 => 'field_cart_twitter_link',
      6 => 'field_cart_youtube_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-social field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_social|node|cart_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabsgroup|node|cart_person|form';
  $field_group->group_name = 'group_tabsgroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs group',
    'weight' => '7',
    'children' => array(
      0 => 'group_cart_links',
      1 => 'group_cart_social',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabsgroup|node|cart_person|form'] = $field_group;

  return $export;
}
