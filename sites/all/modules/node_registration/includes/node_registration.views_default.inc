<?php

/**
 * @file Default Node registration views
 */

/**
 * Implements hook_views_default_views().
 *
 * Defines two views: admin_all_registrations, node_registrations
 */
function node_registration_views_default_views() {
  $vbo = module_exists('views_bulk_operations');

  $views = array();
$view = new view;
$view->name = 'node_registrations';
$view->description = '';
$view->tag = 'node_registration';
$view->base_table = 'node_registration';
$view->human_name = 'Node registrations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Registrations';
$handler->display->display_options['css_class'] = 'node-registration';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer node registration';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Node registration: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = 0;
/* Relationship: Node registration: Event node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'node_registration';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = 1;
/* Field: Node registration: Attended */
$handler->display->display_options['fields']['attended_1']['id'] = 'attended_1';
$handler->display->display_options['fields']['attended_1']['table'] = 'node_registration';
$handler->display->display_options['fields']['attended_1']['field'] = 'attended';
$handler->display->display_options['fields']['attended_1']['label'] = '';
$handler->display->display_options['fields']['attended_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['attended_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['attended_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['attended_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['attended_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['attended_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['attended_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['attended_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['attended_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['attended_1']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['attended_1']['type'] = 'y-n';
$handler->display->display_options['fields']['attended_1']['not'] = 0;
/* Field: Node registration: Cancelled */
$handler->display->display_options['fields']['cancelled_1']['id'] = 'cancelled_1';
$handler->display->display_options['fields']['cancelled_1']['table'] = 'node_registration';
$handler->display->display_options['fields']['cancelled_1']['field'] = 'cancelled';
$handler->display->display_options['fields']['cancelled_1']['label'] = '';
$handler->display->display_options['fields']['cancelled_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['cancelled_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['cancelled_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['cancelled_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['cancelled_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['cancelled_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['cancelled_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['cancelled_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['cancelled_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['cancelled_1']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['cancelled_1']['type'] = 'y-n';
$handler->display->display_options['fields']['cancelled_1']['not'] = 0;
/* Field: Node registration: Verified */
$handler->display->display_options['fields']['verified_1']['id'] = 'verified_1';
$handler->display->display_options['fields']['verified_1']['table'] = 'node_registration';
$handler->display->display_options['fields']['verified_1']['field'] = 'verified';
$handler->display->display_options['fields']['verified_1']['label'] = '';
$handler->display->display_options['fields']['verified_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['verified_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['verified_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['verified_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['verified_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['verified_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['verified_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['verified_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['verified_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['verified_1']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['verified_1']['type'] = 'y-n';
$handler->display->display_options['fields']['verified_1']['not'] = 0;
/* Field: Node registration: Waitinglist */
$handler->display->display_options['fields']['waitinglist_1']['id'] = 'waitinglist_1';
$handler->display->display_options['fields']['waitinglist_1']['table'] = 'node_registration';
$handler->display->display_options['fields']['waitinglist_1']['field'] = 'waitinglist';
$handler->display->display_options['fields']['waitinglist_1']['label'] = '';
$handler->display->display_options['fields']['waitinglist_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['waitinglist_1']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['waitinglist_1']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['waitinglist_1']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['trim'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['alter']['html'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['waitinglist_1']['element_default_classes'] = 1;
$handler->display->display_options['fields']['waitinglist_1']['hide_empty'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['empty_zero'] = 0;
$handler->display->display_options['fields']['waitinglist_1']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['waitinglist_1']['type'] = 'y-n';
$handler->display->display_options['fields']['waitinglist_1']['not'] = 0;
if ($vbo) {
  /* Field: Bulk operations: Node registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_registration';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '20';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_registration_attend_action' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::node_registration_cancel_action' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::system_message_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
      '_all_' => '_all_',
      ),
    ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
    ),
    'action::system_goto_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::system_send_email_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::node_registration_send_mail_action' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::node_registration_unattend_action' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::node_registration_unverify_action' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
    'action::node_registration_verify_action' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
}
/* Field: Node registration: Registration ID */
$handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['table'] = 'node_registration';
$handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
$handler->display->display_options['fields']['registration_id']['label'] = 'ID';
$handler->display->display_options['fields']['registration_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['registration_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['registration_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['registration_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['registration_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['registration_id']['element_default_classes'] = 0;
$handler->display->display_options['fields']['registration_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['registration_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['registration_id']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration'] = 1;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_edit'] = 0;
$handler->display->display_options['fields']['registration_id']['link_to_node_registration_email'] = 0;
/* Field: Node registration: E-mail */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'node_registration';
$handler->display->display_options['fields']['email']['field'] = 'email';
$handler->display->display_options['fields']['email']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['email']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['email']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['email']['alter']['external'] = 0;
$handler->display->display_options['fields']['email']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['email']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['email']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['email']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['email']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['email']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['email']['alter']['trim'] = 0;
$handler->display->display_options['fields']['email']['alter']['html'] = 0;
$handler->display->display_options['fields']['email']['element_label_colon'] = 1;
$handler->display->display_options['fields']['email']['element_default_classes'] = 0;
$handler->display->display_options['fields']['email']['hide_empty'] = 0;
$handler->display->display_options['fields']['email']['empty_zero'] = 0;
$handler->display->display_options['fields']['email']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['email']['link_to_node_registration'] = 0;
$handler->display->display_options['fields']['email']['link_to_node_registration_edit'] = 1;
$handler->display->display_options['fields']['email']['link_to_node_registration_email'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'nid';
$handler->display->display_options['fields']['title']['label'] = 'Event';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = 1;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'User';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['external'] = 0;
$handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['element_label_colon'] = 1;
$handler->display->display_options['fields']['name']['element_default_classes'] = 0;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['name']['link_to_user'] = 1;
$handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
$handler->display->display_options['fields']['name']['format_username'] = 1;
/* Field: Node registration: Slots */
$handler->display->display_options['fields']['slots']['id'] = 'slots';
$handler->display->display_options['fields']['slots']['table'] = 'node_registration';
$handler->display->display_options['fields']['slots']['field'] = 'slots';
$handler->display->display_options['fields']['slots']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['slots']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['slots']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['slots']['alter']['external'] = 0;
$handler->display->display_options['fields']['slots']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['slots']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['slots']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['slots']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['slots']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['slots']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['slots']['alter']['trim'] = 0;
$handler->display->display_options['fields']['slots']['alter']['html'] = 0;
$handler->display->display_options['fields']['slots']['element_label_colon'] = 1;
$handler->display->display_options['fields']['slots']['element_default_classes'] = 0;
$handler->display->display_options['fields']['slots']['hide_empty'] = 0;
$handler->display->display_options['fields']['slots']['empty_zero'] = 0;
$handler->display->display_options['fields']['slots']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['slots']['separator'] = '';
$handler->display->display_options['fields']['slots']['format_plural'] = 0;
/* Field: Node registration: Created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node_registration';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['created']['alter']['external'] = 0;
$handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['created']['alter']['trim'] = 0;
$handler->display->display_options['fields']['created']['alter']['html'] = 0;
$handler->display->display_options['fields']['created']['element_label_colon'] = 1;
$handler->display->display_options['fields']['created']['element_default_classes'] = 0;
$handler->display->display_options['fields']['created']['hide_empty'] = 0;
$handler->display->display_options['fields']['created']['empty_zero'] = 0;
$handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: Node registration: Cancelled */
$handler->display->display_options['fields']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['fields']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['fields']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['fields']['cancelled']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['external'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['cancelled']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['cancelled']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['trim'] = 0;
$handler->display->display_options['fields']['cancelled']['alter']['html'] = 0;
$handler->display->display_options['fields']['cancelled']['element_class'] = 'cancelled [cancelled_1]';
$handler->display->display_options['fields']['cancelled']['element_label_colon'] = 1;
$handler->display->display_options['fields']['cancelled']['element_default_classes'] = 0;
$handler->display->display_options['fields']['cancelled']['hide_empty'] = 0;
$handler->display->display_options['fields']['cancelled']['empty_zero'] = 0;
$handler->display->display_options['fields']['cancelled']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['cancelled']['not'] = 0;
/* Field: Node registration: Waitinglist */
$handler->display->display_options['fields']['waitinglist']['id'] = 'waitinglist';
$handler->display->display_options['fields']['waitinglist']['table'] = 'node_registration';
$handler->display->display_options['fields']['waitinglist']['field'] = 'waitinglist';
$handler->display->display_options['fields']['waitinglist']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['external'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['waitinglist']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['waitinglist']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['trim'] = 0;
$handler->display->display_options['fields']['waitinglist']['alter']['html'] = 0;
$handler->display->display_options['fields']['waitinglist']['element_class'] = 'waitinglist [waitinglist_1]';
$handler->display->display_options['fields']['waitinglist']['element_label_colon'] = 1;
$handler->display->display_options['fields']['waitinglist']['element_default_classes'] = 0;
$handler->display->display_options['fields']['waitinglist']['hide_empty'] = 0;
$handler->display->display_options['fields']['waitinglist']['empty_zero'] = 0;
$handler->display->display_options['fields']['waitinglist']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['waitinglist']['not'] = 0;
/* Field: Node registration: Verified */
$handler->display->display_options['fields']['verified']['id'] = 'verified';
$handler->display->display_options['fields']['verified']['table'] = 'node_registration';
$handler->display->display_options['fields']['verified']['field'] = 'verified';
$handler->display->display_options['fields']['verified']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['verified']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['verified']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['verified']['alter']['external'] = 0;
$handler->display->display_options['fields']['verified']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['verified']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['verified']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['verified']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['verified']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['verified']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['verified']['alter']['trim'] = 0;
$handler->display->display_options['fields']['verified']['alter']['html'] = 0;
$handler->display->display_options['fields']['verified']['element_class'] = 'verified [verified_1]';
$handler->display->display_options['fields']['verified']['element_label_colon'] = 1;
$handler->display->display_options['fields']['verified']['element_default_classes'] = 0;
$handler->display->display_options['fields']['verified']['hide_empty'] = 0;
$handler->display->display_options['fields']['verified']['empty_zero'] = 0;
$handler->display->display_options['fields']['verified']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['verified']['not'] = 0;
/* Field: Node registration: Attended */
$handler->display->display_options['fields']['attended']['id'] = 'attended';
$handler->display->display_options['fields']['attended']['table'] = 'node_registration';
$handler->display->display_options['fields']['attended']['field'] = 'attended';
$handler->display->display_options['fields']['attended']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['attended']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['attended']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['attended']['alter']['external'] = 0;
$handler->display->display_options['fields']['attended']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['attended']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['attended']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['attended']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['attended']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['attended']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['attended']['alter']['trim'] = 0;
$handler->display->display_options['fields']['attended']['alter']['html'] = 0;
$handler->display->display_options['fields']['attended']['element_class'] = 'attended [attended_1]';
$handler->display->display_options['fields']['attended']['element_label_colon'] = 1;
$handler->display->display_options['fields']['attended']['element_default_classes'] = 0;
$handler->display->display_options['fields']['attended']['hide_empty'] = 0;
$handler->display->display_options['fields']['attended']['empty_zero'] = 0;
$handler->display->display_options['fields']['attended']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['attended']['not'] = 0;
/* Field: Node registration: Edit link */
$handler->display->display_options['fields']['edit_node_registration']['id'] = 'edit_node_registration';
$handler->display->display_options['fields']['edit_node_registration']['table'] = 'views_entity_node_registration';
$handler->display->display_options['fields']['edit_node_registration']['field'] = 'edit_node_registration';
$handler->display->display_options['fields']['edit_node_registration']['label'] = '';
$handler->display->display_options['fields']['edit_node_registration']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node_registration']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['edit_node_registration']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['edit_node_registration']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['trim'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['alter']['html'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node_registration']['element_default_classes'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['hide_empty'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['empty_zero'] = 0;
$handler->display->display_options['fields']['edit_node_registration']['hide_alter_empty'] = 1;
/* Field: Node registration: View link */
$handler->display->display_options['fields']['view_node_registration']['id'] = 'view_node_registration';
$handler->display->display_options['fields']['view_node_registration']['table'] = 'views_entity_node_registration';
$handler->display->display_options['fields']['view_node_registration']['field'] = 'view_node_registration';
$handler->display->display_options['fields']['view_node_registration']['label'] = '';
$handler->display->display_options['fields']['view_node_registration']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node_registration']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['view_node_registration']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['view_node_registration']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['trim'] = 0;
$handler->display->display_options['fields']['view_node_registration']['alter']['html'] = 0;
$handler->display->display_options['fields']['view_node_registration']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node_registration']['element_default_classes'] = 0;
$handler->display->display_options['fields']['view_node_registration']['hide_empty'] = 0;
$handler->display->display_options['fields']['view_node_registration']['empty_zero'] = 0;
$handler->display->display_options['fields']['view_node_registration']['hide_alter_empty'] = 1;
/* Field: Node registration: Cancel link */
$handler->display->display_options['fields']['cancel_node_registration']['id'] = 'cancel_node_registration';
$handler->display->display_options['fields']['cancel_node_registration']['table'] = 'views_entity_node_registration';
$handler->display->display_options['fields']['cancel_node_registration']['field'] = 'cancel_node_registration';
$handler->display->display_options['fields']['cancel_node_registration']['label'] = '';
$handler->display->display_options['fields']['cancel_node_registration']['exclude'] = TRUE;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['trim'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['alter']['html'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['cancel_node_registration']['element_default_classes'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['hide_empty'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['empty_zero'] = 0;
$handler->display->display_options['fields']['cancel_node_registration']['hide_alter_empty'] = 1;
/* Field: Node registration: Delete link */
$handler->display->display_options['fields']['delete_node_registration']['id'] = 'delete_node_registration';
$handler->display->display_options['fields']['delete_node_registration']['table'] = 'views_entity_node_registration';
$handler->display->display_options['fields']['delete_node_registration']['field'] = 'delete_node_registration';
$handler->display->display_options['fields']['delete_node_registration']['label'] = '';
$handler->display->display_options['fields']['delete_node_registration']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node_registration']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['delete_node_registration']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['delete_node_registration']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['trim'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['alter']['html'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delete_node_registration']['element_default_classes'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['hide_empty'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['empty_zero'] = 0;
$handler->display->display_options['fields']['delete_node_registration']['hide_alter_empty'] = 1;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Actions';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node_registration] [edit_node_registration] [cancel_node_registration] [delete_node_registration]';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
/* Sort criterion: Node registration: Created */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node_registration';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Node registration: Node nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node_registration';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['nid']['not'] = 0;
/* Filter criterion: Node registration: Attended */
$handler->display->display_options['filters']['attended']['id'] = 'attended';
$handler->display->display_options['filters']['attended']['table'] = 'node_registration';
$handler->display->display_options['filters']['attended']['field'] = 'attended';
$handler->display->display_options['filters']['attended']['value'] = 'All';
$handler->display->display_options['filters']['attended']['exposed'] = TRUE;
$handler->display->display_options['filters']['attended']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['attended']['expose']['label'] = 'Attended';
$handler->display->display_options['filters']['attended']['expose']['use_operator'] = FALSE;
$handler->display->display_options['filters']['attended']['expose']['operator'] = 'attended_op';
$handler->display->display_options['filters']['attended']['expose']['identifier'] = 'attended';
$handler->display->display_options['filters']['attended']['expose']['multiple'] = FALSE;
/* Filter criterion: Node registration: Cancelled */
$handler->display->display_options['filters']['cancelled']['id'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['table'] = 'node_registration';
$handler->display->display_options['filters']['cancelled']['field'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['value'] = 'All';
$handler->display->display_options['filters']['cancelled']['exposed'] = TRUE;
$handler->display->display_options['filters']['cancelled']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['cancelled']['expose']['label'] = 'Cancelled';
$handler->display->display_options['filters']['cancelled']['expose']['use_operator'] = FALSE;
$handler->display->display_options['filters']['cancelled']['expose']['operator'] = 'cancelled_op';
$handler->display->display_options['filters']['cancelled']['expose']['identifier'] = 'cancelled';
$handler->display->display_options['filters']['cancelled']['expose']['multiple'] = FALSE;
/* Filter criterion: Node registration: Verified */
$handler->display->display_options['filters']['verified']['id'] = 'verified';
$handler->display->display_options['filters']['verified']['table'] = 'node_registration';
$handler->display->display_options['filters']['verified']['field'] = 'verified';
$handler->display->display_options['filters']['verified']['value'] = 'All';
$handler->display->display_options['filters']['verified']['exposed'] = TRUE;
$handler->display->display_options['filters']['verified']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['verified']['expose']['label'] = 'Verified';
$handler->display->display_options['filters']['verified']['expose']['use_operator'] = FALSE;
$handler->display->display_options['filters']['verified']['expose']['operator'] = 'verified_op';
$handler->display->display_options['filters']['verified']['expose']['identifier'] = 'verified';
$handler->display->display_options['filters']['verified']['expose']['multiple'] = FALSE;

/* Display: All registrations */
$handler = $view->new_display('page', 'All registrations', 'all');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = FALSE;
$handler->display->display_options['header']['area']['content'] = 'These are ALL registrations. Newest first. Node specific registrations can be found in the Node registrations settings of that node.';
$handler->display->display_options['header']['area']['format'] = 'plain_text';
$handler->display->display_options['header']['area']['tokenize'] = 0;
$handler->display->display_options['path'] = 'admin/content/registrations';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Registrations';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: One event's registrations */
$handler = $view->new_display('page', 'One event\'s registrations', 'event');
$handler->display->display_options['path'] = 'node/%/node_registration';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Registrations';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['tab_options']['weight'] = '0';

  $views[$view->name] = $view;







$view = new view;
$view->name = 'node_registration_users';
$view->description = "This view is for the admin's user list when adding a registration. You can sort and filter it etc. The rendered Name field is used in the dropdown. When disabled, the admin is presented an autocompleting textfield instead of a dropdown.";
$view->tag = 'node_registration';
$view->base_table = 'users';
$view->human_name = 'Node registration users';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Node registration users';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['name']['alter']['external'] = 0;
$handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['name']['alter']['html'] = 0;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['name']['hide_empty'] = 0;
$handler->display->display_options['fields']['name']['empty_zero'] = 0;
$handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['name']['link_to_user'] = 0;
$handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
$handler->display->display_options['fields']['name']['format_username'] = 1;
/* Sort criterion: User: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'users';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

  $views[$view->name] = $view;










  return $views;
}


