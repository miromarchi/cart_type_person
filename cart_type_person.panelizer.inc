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
    $pane->pid = 'new-c235dddf-320d-432a-a804-240b77be2c80';
    $pane->panel = 'contentmain';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c235dddf-320d-432a-a804-240b77be2c80';
    $display->content['new-c235dddf-320d-432a-a804-240b77be2c80'] = $pane;
    $display->panels['contentmain'][2] = 'new-c235dddf-320d-432a-a804-240b77be2c80';
    $pane = new stdClass();
    $pane->pid = 'new-11ff5543-1db3-4e2a-b6b9-cda21c1ddc35';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_links-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '11ff5543-1db3-4e2a-b6b9-cda21c1ddc35';
    $display->content['new-11ff5543-1db3-4e2a-b6b9-cda21c1ddc35'] = $pane;
    $display->panels['contentmain'][3] = 'new-11ff5543-1db3-4e2a-b6b9-cda21c1ddc35';
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
  $panelizer->name = 'node:cart_person:default:cart_vmode_curator';
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
  $panelizer->view_mode = 'cart_vmode_curator';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0264d5af-f7a4-4ac0-8da0-427d2cd76520';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0cbf2d3a-3985-4a4c-b470-a37b2ec526e0';
    $pane->panel = 'center';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0cbf2d3a-3985-4a4c-b470-a37b2ec526e0';
    $display->content['new-0cbf2d3a-3985-4a4c-b470-a37b2ec526e0'] = $pane;
    $display->panels['center'][0] = 'new-0cbf2d3a-3985-4a4c-b470-a37b2ec526e0';
    $pane = new stdClass();
    $pane->pid = 'new-d0c777c7-69ff-4e5d-9ade-4cded5ff6379';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'cart_vmode_curator',
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
    $pane->uuid = 'd0c777c7-69ff-4e5d-9ade-4cded5ff6379';
    $display->content['new-d0c777c7-69ff-4e5d-9ade-4cded5ff6379'] = $pane;
    $display->panels['center'][1] = 'new-d0c777c7-69ff-4e5d-9ade-4cded5ff6379';
    $pane = new stdClass();
    $pane->pid = 'new-091b2d2c-5b22-4f16-9b9a-8f81ede74182';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '091b2d2c-5b22-4f16-9b9a-8f81ede74182';
    $display->content['new-091b2d2c-5b22-4f16-9b9a-8f81ede74182'] = $pane;
    $display->panels['center'][2] = 'new-091b2d2c-5b22-4f16-9b9a-8f81ede74182';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-d0c777c7-69ff-4e5d-9ade-4cded5ff6379';
  $panelizer->display = $display;
  $export['node:cart_person:default:cart_vmode_curator'] = $panelizer;

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
  $panelizer->name = 'node:cart_person:default:cart_vmode_sponsor';
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
  $panelizer->view_mode = 'cart_vmode_sponsor';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '15924bd5-4c6c-4a79-92e3-cc76f059d4fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a1c9f759-123b-40a3-a4d4-5e697e2010e0';
    $pane->panel = 'center';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a1c9f759-123b-40a3-a4d4-5e697e2010e0';
    $display->content['new-a1c9f759-123b-40a3-a4d4-5e697e2010e0'] = $pane;
    $display->panels['center'][0] = 'new-a1c9f759-123b-40a3-a4d4-5e697e2010e0';
    $pane = new stdClass();
    $pane->pid = 'new-ad6bec45-58da-4049-a104-7253e76e381a';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'cart_vmode_sponsor',
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
    $pane->uuid = 'ad6bec45-58da-4049-a104-7253e76e381a';
    $display->content['new-ad6bec45-58da-4049-a104-7253e76e381a'] = $pane;
    $display->panels['center'][1] = 'new-ad6bec45-58da-4049-a104-7253e76e381a';
    $pane = new stdClass();
    $pane->pid = 'new-d23f7a21-07d3-430e-b421-6b728e04bfed';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd23f7a21-07d3-430e-b421-6b728e04bfed';
    $display->content['new-d23f7a21-07d3-430e-b421-6b728e04bfed'] = $pane;
    $display->panels['center'][2] = 'new-d23f7a21-07d3-430e-b421-6b728e04bfed';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a1c9f759-123b-40a3-a4d4-5e697e2010e0';
  $panelizer->display = $display;
  $export['node:cart_person:default:cart_vmode_sponsor'] = $panelizer;

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
    $pane = new stdClass();
    $pane->pid = 'new-29faab54-86b5-4ff6-a909-153c65a8d859';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '29faab54-86b5-4ff6-a909-153c65a8d859';
    $display->content['new-29faab54-86b5-4ff6-a909-153c65a8d859'] = $pane;
    $display->panels['middle'][2] = 'new-29faab54-86b5-4ff6-a909-153c65a8d859';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_person:default:teaser'] = $panelizer;

  return $export;
}
