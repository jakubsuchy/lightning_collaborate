<?php
/**
 * @file
 * lightning_collaborate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lightning_collaborate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lightning_collaborate_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function lightning_collaborate_default_message_type() {
  $items = array();
  $items['content_changed'] = entity_import('message_type', '{
    "name" : "content_changed",
    "description" : "Content changed",
    "argument_keys" : [ "@title", "@user", "@url", "@uid" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : [],
    "rdf_mapping" : []
  }');
  $items['content_needs_approval'] = entity_import('message_type', '{
    "name" : "content_needs_approval",
    "description" : "Content needs approval",
    "argument_keys" : [ "@title", "@user", "@url", "@uid" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : [],
    "rdf_mapping" : []
  }');
  $items['content_published'] = entity_import('message_type', '{
    "name" : "content_published",
    "description" : "Content published",
    "argument_keys" : [ "@title", "@user", "@url", "@uid" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : [],
    "rdf_mapping" : []
  }');
  $items['notification'] = entity_import('message_type', '{
    "name" : "notification",
    "description" : "Content created",
    "argument_keys" : [ "@title", "@user", "@url", "@uid" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : [],
    "rdf_mapping" : []
  }');
  $items['status_update'] = entity_import('message_type', '{
    "name" : "status_update",
    "description" : "Status update",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Cspan style=\\u0022color: rgb(51, 51, 51); font-family: sans-serif, Arial, Verdana, \\u0027Trebuchet MS\\u0027; font-size: 13px; line-height: 20.7999992370605px;\\u0022\\u003E[message:field_status_update]\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:field_status_update]\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_task_type().
 */
function lightning_collaborate_default_task_type() {
  $items = array();
  $items['content'] = entity_import('task_type', '{
    "type" : "content",
    "label" : "Content",
    "weight" : 0,
    "description" : "",
    "rdf_mapping" : []
  }');
  $items['task'] = entity_import('task_type', '{
    "type" : "task",
    "label" : "Task",
    "weight" : 0,
    "description" : "Default task.",
    "rdf_mapping" : []
  }');
  return $items;
}
