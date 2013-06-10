<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 function cargo_menu_link__menu_project_menu(array $variables) {
$element = $variables['element'];
$class='';
$title='';
global $user;
if (arg(0) == 'node') {
  $nid = arg(1);
  $node = node_load($nid);
  if(isset($node->type)){
	if ($node->type =="project")
     $element['#href'] = url($element['#href']).'?og_group_ref='.$nid;
	 }
}
if (isset($element['#localized_options']['attributes']['class'][0])){
  	$class = 'icon-'.$element['#localized_options']['attributes']['class'][0];
  }
if (isset($element['#localized_options']['attributes']['title'])){
	$title = $element['#localized_options']['attributes']['title'];
  }  
if($element['#original_link']['link_path'] == '<nolink>')
 {
	$output = '<span class="'.$class.'">'.$element['#title'].'</span></a>';
	return '<li class="'.$class.'">'. $output ."</li>\n";
 }

$output = '<a class="nav" href="'.$element['#href'].'" title="'.$title.'" ><span class="'.$class.'"></span></a>';
  return '<li class="'.$class.'">'. $output ."</li>\n";
}
 
 function cargo_form_element($variables) {
  $element = &$variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  
  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
		 if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  } 
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
		 if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  } 
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  } 
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }
  $output .= "</div>\n";

  return $output;
}
/**
 * Implements hook_form_FORM_ID_alter()
 *  Style for the user login form
 */
 function cargo_form_user_login_alter(&$form, &$form_state,$form_id) { 
 $form['pass']['#required']= FALSE;
 $form['name']['#required']= FALSE;
 unset($form['name']['#description']);
  unset($form['mail']['#description']);
  unset($form['pass']['#description']);
 $form['actions']['submit']['#attributes']['class']= array('button');
}
/**
 * Implements hook_form_FORM_ID_alter()
 *  Style for the user registration form
 */
function cargo_form_user_register_form_alter(&$form, &$form_state,$form_id) {
 $form['actions']['submit']['#attributes']['class']= array('button');
 $form['pass']['#required']= FALSE;
 $form['name']['#required']= FALSE;
  unset($form['name']['#description']);
  unset($form['mail']['#description']);
  unset($form['pass']['#description']);
}
function okolo_form_user_pass_alter(&$form, &$form_state,$form_id) {
 	$form['actions']['submit']['#attributes']['class']= array('button');
	unset($form['mail']['#description']);
}
/*
**
 *  Register form Theming
*/ 
function cargo_theme() {
  $items = array();
  
  $items['user_register_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'cargo') . '/templates/forms',
    'template' => 'user-register-form',
    'preprocess functions' => array(
      'cargo_preprocess_user_register_form'
    ),
  );
  $items['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'cargo') . '/templates/forms',
    'template' => 'user-login-form',
    'preprocess functions' => array(
      'cargo_preprocess_user_login_form'
    ),
  );

  return $items;
}
function cargo_preprocess_user_login_form(&$variables){
  $path = drupal_get_path('theme','cargo');		
  $variables['mail_pass']= drupal_render_children($variables['form']);

}
function cargo_preprocess_user_register_form(&$variables){
  $path = drupal_get_path('theme','cargo');		
  //drupal_add_css($path.'/css/settings.css');
  //dsm($variables);
  $variables['policy']= t('????? ?????????
??????? <a href="../about/terms">à?????/a>');
  $variables['action']=  drupal_render($variables['form']['actions']);
  $variables['mail_pass']= drupal_render_children($variables['form']);

}