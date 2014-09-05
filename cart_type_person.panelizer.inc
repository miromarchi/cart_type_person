<?php
/**
 * @file
 * cart_type_person.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cart_type_person_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_person:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_person';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'person';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '7',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '5',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => array(
        'column_size' => '12',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'main_' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '02276816-7d48-4f3f-901b-e4e85225381a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16506716-ab7e-4d6c-9383-46028300e6e5';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cart_img_circle',
        'image_link' => 'file',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16506716-ab7e-4d6c-9383-46028300e6e5';
    $display->content['new-16506716-ab7e-4d6c-9383-46028300e6e5'] = $pane;
    $display->panels['contentmain'][0] = 'new-16506716-ab7e-4d6c-9383-46028300e6e5';
    $pane = new stdClass();
    $pane->pid = 'new-68d2bd6a-f27f-4314-86f9-ad3a868ce29d';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '68d2bd6a-f27f-4314-86f9-ad3a868ce29d';
    $display->content['new-68d2bd6a-f27f-4314-86f9-ad3a868ce29d'] = $pane;
    $display->panels['contentmain'][1] = 'new-68d2bd6a-f27f-4314-86f9-ad3a868ce29d';
    $pane = new stdClass();
    $pane->pid = 'new-402869d9-5d80-4c48-bf57-3c2992a949a5';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'cart-node-title',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'text-center',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '402869d9-5d80-4c48-bf57-3c2992a949a5';
    $display->content['new-402869d9-5d80-4c48-bf57-3c2992a949a5'] = $pane;
    $display->panels['contentmain'][2] = 'new-402869d9-5d80-4c48-bf57-3c2992a949a5';
    $pane = new stdClass();
    $pane->pid = 'new-d2dcc6d7-1b1d-4d84-bffe-706b4d9fbf3a';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd2dcc6d7-1b1d-4d84-bffe-706b4d9fbf3a';
    $display->content['new-d2dcc6d7-1b1d-4d84-bffe-706b4d9fbf3a'] = $pane;
    $display->panels['contentmain'][3] = 'new-d2dcc6d7-1b1d-4d84-bffe-706b4d9fbf3a';
    $pane = new stdClass();
    $pane->pid = 'new-e30fe3a3-95f1-4342-8bb5-1cebaa9c84ce';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_based';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'addressfield_citystate',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e30fe3a3-95f1-4342-8bb5-1cebaa9c84ce';
    $display->content['new-e30fe3a3-95f1-4342-8bb5-1cebaa9c84ce'] = $pane;
    $display->panels['contentmain'][4] = 'new-e30fe3a3-95f1-4342-8bb5-1cebaa9c84ce';
    $pane = new stdClass();
    $pane->pid = 'new-38da40e7-23c1-4192-9972-7d37d8983f66';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '38da40e7-23c1-4192-9972-7d37d8983f66';
    $display->content['new-38da40e7-23c1-4192-9972-7d37d8983f66'] = $pane;
    $display->panels['contentmain'][5] = 'new-38da40e7-23c1-4192-9972-7d37d8983f66';
    $pane = new stdClass();
    $pane->pid = 'new-bf3ba2a6-ad63-4187-8660-4e3bf1ac992f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
      'fields_override' => array(
        'field_cart_image' => 1,
        'title' => 1,
        'field_cart_venue' => 1,
        'field_cart_date' => 1,
        'title_1' => 1,
        'title_2' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bf3ba2a6-ad63-4187-8660-4e3bf1ac992f';
    $display->content['new-bf3ba2a6-ad63-4187-8660-4e3bf1ac992f'] = $pane;
    $display->panels['sidebar'][0] = 'new-bf3ba2a6-ad63-4187-8660-4e3bf1ac992f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-16506716-ab7e-4d6c-9383-46028300e6e5';
  $panelizer->display = $display;
  $export['node:cart_person:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_person:default:cart_vmode_minimal';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_person';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'cart_vmode_minimal';
  $panelizer->css_class = '';
  $panelizer->title_element = '';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e0a96238-853a-4dc7-a26e-e0ac7ecdebe4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6f3df291-08ee-4dab-ac7f-3a51801741c2';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cart_img_circle_icon',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f3df291-08ee-4dab-ac7f-3a51801741c2';
    $display->content['new-6f3df291-08ee-4dab-ac7f-3a51801741c2'] = $pane;
    $display->panels['middle'][0] = 'new-6f3df291-08ee-4dab-ac7f-3a51801741c2';
    $pane = new stdClass();
    $pane->pid = 'new-ce0f5aea-6e20-4da7-86e6-0d58b0cd4491';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce0f5aea-6e20-4da7-86e6-0d58b0cd4491';
    $display->content['new-ce0f5aea-6e20-4da7-86e6-0d58b0cd4491'] = $pane;
    $display->panels['middle'][1] = 'new-ce0f5aea-6e20-4da7-86e6-0d58b0cd4491';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6f3df291-08ee-4dab-ac7f-3a51801741c2';
  $panelizer->display = $display;
  $export['node:cart_person:default:cart_vmode_minimal'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_person:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_person';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H3 class="node-title"';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'eb0e2d67-aa0a-43a4-94c3-00abc4f184e6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-965a3dc1-a476-474e-aaf7-b137dcbc8d96';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cart_img_circle_thumb',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '965a3dc1-a476-474e-aaf7-b137dcbc8d96';
    $display->content['new-965a3dc1-a476-474e-aaf7-b137dcbc8d96'] = $pane;
    $display->panels['middle'][0] = 'new-965a3dc1-a476-474e-aaf7-b137dcbc8d96';
    $pane = new stdClass();
    $pane->pid = 'new-ba171b5f-dee1-4572-b053-1e820a0816f7';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'teaser',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ba171b5f-dee1-4572-b053-1e820a0816f7';
    $display->content['new-ba171b5f-dee1-4572-b053-1e820a0816f7'] = $pane;
    $display->panels['middle'][1] = 'new-ba171b5f-dee1-4572-b053-1e820a0816f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_person:default:teaser'] = $panelizer;

  return $export;
}
