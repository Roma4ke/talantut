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

function goodis_menu_link__menu_profile_menu(&$variables) {
  $element = $variables['element'];
  global $user;
  $sub_menu = '';
  $active = '';
  $class='';
  $rel ='';
  $count = 0;

  $element['#href'] = url($element['#href']);
  if (module_exists('privatemsg')){
	   $count = privatemsg_unread_count();
  } 
  if (isset($element['#localized_options']['attributes']['id'])){
  	$class = 'icon-'.$element['#localized_options']['attributes']['id'];
}
  $title = $element['#title'];	   
	    if ($class =='icon-user-messages') {
	    	if($count != 0){
	   			$element['#title'] = '<div class="alert-count">'.$count.'</div>';	
			}
			else {
				$element['#title'] ='';	
			}
	   }
	   
	   if ($title =='Me') {
	   $fid = $user->picture;
		if($fid != 0 ){	  
			$file = file_load($fid);		
			$element['#title'] = theme('image_style', array('style_name' => '50-50', 'path' => $file->uri, 'alt' => $element['#title'], 'title' => $element['#title']));	   
			}
		else {
			$element['#title'] = theme('image_style', array('style_name' => '50-50', 'path' =>'public://pictures/def.png', 'alt' => $element['#title'], 'title' => $element['#title']));	 
		}
		
		}
  $output = '<a class="nav" href="'.$element['#href'].'" '.$rel.' ><span class="'.$class.'"></span>'.$element['#title'].'</a>';
  return '<li>'. $output ."</li>\n";
}

function goodis_theme() {
  $items = array();
  
  $items['user_register_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'goodis') . '/templates/forms',
    'template' => 'user-register-form',
    'preprocess functions' => array(
      'goodis_preprocess_user_register_form'
    ),
  );
  $items['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'goodis') . '/templates/forms',
    'template' => 'user-login-form',
    'preprocess functions' => array(
      'goodis_preprocess_user_login_form'
    ),
  );

  return $items;
}
function goodis_preprocess_user_login_form(&$variables){
  $path = drupal_get_path('theme','goodis');		
  $variables['mail_pass']= drupal_render_children($variables['form']);
}
function goodis_preprocess_user_register_form(&$variables){
  $path = drupal_get_path('theme','goodis');		
  //drupal_add_css($path.'/css/settings.css');
  dsm($variables);
  $variables['policy']= t('????? ?????????
??????? <a href="../about/terms">à?????/a>');
  $variables['action']=  drupal_render($variables['form']['actions']);
  $variables['mail_pass']= drupal_render_children($variables['form']);

}