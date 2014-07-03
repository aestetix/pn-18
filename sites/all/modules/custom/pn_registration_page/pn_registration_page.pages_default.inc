<?php
/**
 * @file
 * pn_registration_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pn_registration_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'phreaknic_registration';
  $page->task = 'page';
  $page->admin_title = 'phreaknic-registration';
  $page->admin_description = 'Registration Page';
  $page->path = 'registration';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Registration',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_phreaknic_registration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'phreaknic_registration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
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
  $display->title = 'Registration';
  $display->uuid = '0b9a3be0-2f7c-42a7-9745-aea76964329b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7501df5d-36e1-4489-94d0-2bc317e167b6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_tickets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ticket_type',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'submit_text' => 'Register',
        'show_unavailable' => 0,
      ),
      'context' => 'context_entity:node_1',
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
    $pane->uuid = '7501df5d-36e1-4489-94d0-2bc317e167b6';
    $display->content['new-7501df5d-36e1-4489-94d0-2bc317e167b6'] = $pane;
    $display->panels['center'][0] = 'new-7501df5d-36e1-4489-94d0-2bc317e167b6';
    $pane = new stdClass();
    $pane->pid = 'new-1b942ab8-b2fb-437f-9e51-35453e5dd95a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'commerce_cart-cart';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1b942ab8-b2fb-437f-9e51-35453e5dd95a';
    $display->content['new-1b942ab8-b2fb-437f-9e51-35453e5dd95a'] = $pane;
    $display->panels['center'][1] = 'new-1b942ab8-b2fb-437f-9e51-35453e5dd95a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7501df5d-36e1-4489-94d0-2bc317e167b6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['phreaknic_registration'] = $page;

  return $pages;

}
