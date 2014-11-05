<?php
/**
 * @file
 * lightning_collaborate.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lightning_collaborate_default_rules_configuration() {
  $items = array();
  $items['rules_complete_a_finished_task'] = entity_import('rules_config', '{ "rules_complete_a_finished_task" : {
      "LABEL" : "Complete a finished task",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "task",
              "property" : "field_task_related_content",
              "value" : [ "node" ],
              "limit" : "0"
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        }
      ]
    }
  }');
  $items['rules_content_changed'] = entity_import('rules_config', '{ "rules_content_changed" : {
      "LABEL" : "Content changed",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "content_changed",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-related-content" ],
            "value" : [ "node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:title" ],
            "value" : [ "node:title" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:user" ],
            "value" : [ "node:author:name" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:arguments:url" ], "value" : [ "node:url" ] } },
        { "data_set" : {
            "data" : [ "entity-created:arguments:uid" ],
            "value" : [ "node:author:uid" ]
          }
        }
      ]
    }
  }');
  $items['rules_content_created'] = entity_import('rules_config', '{ "rules_content_created" : {
      "LABEL" : "Content created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "notification",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-related-content" ],
            "value" : [ "node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:title" ],
            "value" : [ "node:title" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:user" ],
            "value" : [ "node:author:name" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:arguments:url" ], "value" : [ "node:url" ] } },
        { "data_set" : {
            "data" : [ "entity-created:arguments:uid" ],
            "value" : [ "node:author:uid" ]
          }
        }
      ]
    }
  }');
  $items['rules_content_needs_approval'] = entity_import('rules_config', '{ "rules_content_needs_approval" : {
      "LABEL" : "Content needs approval",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "content_needs_approval",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-related-content" ],
            "value" : [ "node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:title" ],
            "value" : [ "node:title" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:user" ],
            "value" : [ "node:author:name" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:arguments:url" ], "value" : [ "node:url" ] } },
        { "data_set" : {
            "data" : [ "entity-created:arguments:uid" ],
            "value" : [ "node:author:uid" ]
          }
        }
      ]
    }
  }');
  $items['rules_content_published'] = entity_import('rules_config', '{ "rules_content_published" : {
      "LABEL" : "Content published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "content_published",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-related-content" ],
            "value" : [ "node" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:title" ],
            "value" : [ "node:title" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:arguments:user" ],
            "value" : [ "node:author:name" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:arguments:url" ], "value" : [ "node:url" ] } },
        { "data_set" : {
            "data" : [ "entity-created:arguments:uid" ],
            "value" : [ "node:author:uid" ]
          }
        }
      ]
    }
  }');
  $items['rules_create_a_review_task'] = entity_import('rules_config', '{ "rules_create_a_review_task" : {
      "LABEL" : "Create a review task",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } },
        { "OR" : [] },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_blogger_review" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "task", "param_uid" : [ "node:author" ] },
            "PROVIDE" : { "entity_created" : { "created_task" : "Created task" } }
          }
        },
        { "data_set" : { "data" : [ "created-task:type" ], "value" : "content" } },
        { "component_rules_save_a_task" : { "node" : [ "node" ], "task" : [ "created-task" ] } }
      ]
    }
  }');
  $items['rules_save_a_task'] = entity_import('rules_config', '{ "rules_save_a_task" : {
      "LABEL" : "Save a task",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "Created node", "type" : "node" },
        "task" : { "label" : "Created task", "type" : "task" }
      },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "task" ],
            "type" : "task",
            "bundle" : { "value" : { "content" : "content" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "task:title" ], "value" : "[node:title] needs review" } },
        { "data_set" : { "data" : [ "task:field-task-related-content" ], "value" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
