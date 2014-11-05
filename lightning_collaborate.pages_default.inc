<?php
/**
 * @file
 * lightning_collaborate.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function lightning_collaborate_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'collaborate';
  $page->task = 'page';
  $page->admin_title = 'Collaborate';
  $page->admin_description = '';
  $page->path = 'admin/workbench/collaborate';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Collaborate',
    'name' => 'navigation',
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
  $handler->name = 'page_collaborate_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'collaborate';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.view-collaborate-tasks .views-field-changed, .view-editorial-notifications .views-field-timestamp {
    float: left;
    width: 70px;
    margin-right: 20px;
    font-size: 0.8em;
}

.view-collaborate-tasks .views-row, .view-editorial-notifications .views-row {
    margin-bottom: 30px;
}

.view-collaborate-tasks span.task-related, .view-editorial-notifications span.message-related {
    display: block;
    /* font-style: italic; */
    font-size: 0.9em;
    color: #777;
}
.view-editorial-notifications .views-exposed-form .views-exposed-widget {
    display: block;
}
.view-editorial-notifications .views-exposed-form .views-exposed-widget input {
    margin-top: 0;
}',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collaborate';
  $display->uuid = 'f3e74bc8-6e4f-4cd5-940e-1702b26632dc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bfcb85df-f944-4bdb-9a31-615fda27ca8f';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'collaborate_tasks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'All pending tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bfcb85df-f944-4bdb-9a31-615fda27ca8f';
    $display->content['new-bfcb85df-f944-4bdb-9a31-615fda27ca8f'] = $pane;
    $display->panels['left'][0] = 'new-bfcb85df-f944-4bdb-9a31-615fda27ca8f';
    $pane = new stdClass();
    $pane->pid = 'new-13cc663d-7fa5-4fb7-9bbe-5e7605599750';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'collaborate_tasks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'user_completed_tasks',
      'override_title' => 1,
      'override_title_text' => 'Recently completed',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '13cc663d-7fa5-4fb7-9bbe-5e7605599750';
    $display->content['new-13cc663d-7fa5-4fb7-9bbe-5e7605599750'] = $pane;
    $display->panels['left'][1] = 'new-13cc663d-7fa5-4fb7-9bbe-5e7605599750';
    $pane = new stdClass();
    $pane->pid = 'new-dda67065-f3b1-4a8b-96b4-c26380d03ea0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'lightning_collaborate-lightning_collaborate_statuses';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Share a status',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dda67065-f3b1-4a8b-96b4-c26380d03ea0';
    $display->content['new-dda67065-f3b1-4a8b-96b4-c26380d03ea0'] = $pane;
    $display->panels['right'][0] = 'new-dda67065-f3b1-4a8b-96b4-c26380d03ea0';
    $pane = new stdClass();
    $pane->pid = 'new-c3ad98ec-4fba-44de-9356-a9fee7a8d407';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'editorial_notifications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '30',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c3ad98ec-4fba-44de-9356-a9fee7a8d407';
    $display->content['new-c3ad98ec-4fba-44de-9356-a9fee7a8d407'] = $pane;
    $display->panels['right'][1] = 'new-c3ad98ec-4fba-44de-9356-a9fee7a8d407';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bfcb85df-f944-4bdb-9a31-615fda27ca8f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['collaborate'] = $page;

  return $pages;

}
