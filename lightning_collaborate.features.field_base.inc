<?php
/**
 * @file
 * lightning_collaborate.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lightning_collaborate_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_related_content'
  $field_bases['field_related_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_content',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'personalize' => array(
        'agent_type' => 'acquia_lift',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'options' => array(
          'acquia_lift' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
          'acquia_lift_simple_ab' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
        ),
        'stop_on_winner' => 0,
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_status_update'
  $field_bases['field_status_update'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_update',
    'field_permissions' => array(
      'type' => 0,
    ),
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
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'personalize' => array(
        'agent_type' => 'acquia_lift',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'options' => array(
          'acquia_lift' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
          'acquia_lift_simple_ab' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
        ),
        'stop_on_winner' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_task_related_content'
  $field_bases['field_task_related_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_task_related_content',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'personalize' => array(
        'agent_type' => 'acquia_lift',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'options' => array(
          'acquia_lift' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
          'acquia_lift_simple_ab' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
        ),
        'stop_on_winner' => 0,
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'task_assignee'
  $field_bases['task_assignee'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'task',
    ),
    'field_name' => 'task_assignee',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'users' => array(
        'columns' => array(
          'target_id' => 'uid',
        ),
        'table' => 'users',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'personalize' => array(
        'agent_type' => 'acquia_lift',
        'auto_start' => 1,
        'create_goal' => 1,
        'enabled' => 0,
        'options' => array(
          'acquia_lift' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
          'acquia_lift_simple_ab' => array(
            'control_rate' => 10,
            'decision_style' => 'adaptive',
            'explore_rate' => 20,
            'stop_on_winner' => 0,
          ),
        ),
        'stop_on_winner' => 0,
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
