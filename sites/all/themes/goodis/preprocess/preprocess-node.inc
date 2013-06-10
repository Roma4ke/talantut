<?php
function goodis_alpha_preprocess_node(&$variables) {
  
  $nodeType = $variables['node']->type;
  $function = __FUNCTION__ . $nodeType;

  if (function_exists($function)) {
  	  $function($variables);
 	 }
}
function goodis_alpha_preprocess_nodeproject(&$variables) {
	
	//dsm($variables);
	$path = drupal_get_path('theme','goodis');
	drupal_add_js($path.'/js/goodis.js');	
	$title = $variables['title'];
	$node_url = $variables['node_url'];
	$class = array( 
	42 => "yellow",
    43  => "green",
    44  => "blue",
    239 => "red",
);

    $tid = $variables['field_project_phase']['und'][0]['tid'];
	
    $term = taxonomy_term_load($tid);
    $name = $term->name;
	
	$poutput = '<div class="field-project-phase '.$class[$tid].'">'.$name.'</div>';
	$variables['projectphase'] = $poutput;
/*
    if($variables['teaser']) {
		$view = views_get_view('projects');
		$nid = $variables['nid'];
		$args = array($nid);
		$view->set_display('block_1');
		$view->set_arguments($args);
		$output = $view->preview('block_1',$args);
		$view->destroy();
		$variables['members'] = $output;
	 }
	*/	
	 if(!$variables['teaser']) {
		/*News Count*/
		$view = views_get_view('projects_rating');
		$nid = $variables['nid'];
		$args = array($nid);
		$view->set_display('news');
		$view->set_arguments($args);
		$output = $view->preview('news',$args);
		$view->destroy();
		$variables['news'] = $output;		
		
		/*Social Links */
		$urlvk = 'http://vk.com/share.php?url=' . 'http://' . $_SERVER["HTTP_HOST"] . $node_url;
		$urlfb = 'http://www.facebook.com/sharer.php?u=' . 'http://' . $_SERVER["HTTP_HOST"] .$node_url;
		$urltw = 'https://twitter.com/share?text=' . urlencode($title) . '&url=http://' . $_SERVER["HTTP_HOST"] . $node_url;

		
		$social = '<div class="add-social"><span>Поделиться:</span> <a href="'.$urlvk.'" class="soc-icon"><img src="http://'. $_SERVER["HTTP_HOST"] .'/sites/all/themes/goodis/images/vk.png" width="20" height="20"></a><a href="'.$urltw.'" class="soc-icon"><img src="http://'. $_SERVER["HTTP_HOST"] .'/sites/all/themes/goodis/images/twitter.png" width="20" height="20"></a><a href="'.$urlfb.'" class="soc-icon"><img src="http://'. $_SERVER["HTTP_HOST"] .'/sites/all/themes/goodis/images/facebook.png" width="20" height="20"></a></div>';

		$variables['social'] = $social;
		
		
		
	 }	
	
	
}
