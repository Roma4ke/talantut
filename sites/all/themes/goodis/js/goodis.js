jQuery(document).ready(function($){

	function socialopen(url){
	var winpar='width=500,height=400,left=' + ((window.innerWidth - 500)/2) + ',top=' + ((window.innerHeight - 400)/2) ;
	window.open(url,'tvkw',winpar);
	}
	(function ($) { 
		$(document).ready(function(e) {
			$('a.soc-icon').click(function(){
			var url = $(this).attr('href'); 
				socialopen(url);
			return false;
			})
		});
	})(jQuery);
	
});