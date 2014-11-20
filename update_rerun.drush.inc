<?php

function update_rerun_drush_command() {
  $commands = array();

  $commands['update_rerun'] = array(
    'description' => 'Rerun an update hook for a module',
    'aliases' => array('urr'),
    'arguments' => array(
      'module' => 'Module', 
      'version' => 'Update hook number',
    ),
    'required-arguments' => TRUE,
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $commands;
}

function drush_update_rerun($module, $version) {

  if (!module_load_install($module)) {
    drush_log('Unable to load ' . $module .'.install', 'error');
    return;
  }

  $update_hooks = drupal_get_schema_versions($module);

  if (empty($update_hooks) || !in_array($version, $update_hooks)) {
    drush_log('Update hook unavailable', 'error');
    return;
  }

  $function = $module . '_update_' . $version;
  $function();
}
