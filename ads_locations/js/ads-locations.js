(function($){
  
  $(function () {
    
    $('.module-ads-locations .regions, .module-ads-locations .cities').hide();
    $('.module-ads-locations .country-title, .module-ads-locations .region-title').removeClass('open');
    
    // Country toggling.
    $('.module-ads-locations .country-title').click(function () {
      var regions = $(this).parent().find('.regions');
      var visible = regions.is(":visible");
      
      // Hiding all regions firstly.
      $('.module-ads-locations .regions').hide();
      $('.module-ads-locations .country-title').removeClass('open');
      
      if (!visible) {
        regions.fadeIn(200);
        $(this).addClass ('open');
      }
      else {
        regions.fadeOut(200);
        $(this).removeClass ('open');
      }
      
    });

    // Region toggling.
    $('.module-ads-locations .region-title').click(function () {
      var cities  = $(this).parent().find('.cities');
      var visible = cities.is(":visible");
      
      // Hiding all cities firstly.
      $('.module-ads-locations .cities').hide();
      $('.module-ads-locations .region-title').removeClass('open');      
      if (!visible) {
        cities.fadeIn(200);
        $(this).addClass ('open');
      }
      else {
        cities.fadeOut(200);
        $(this).removeClass ('open');
      }
      
    });
    
    // Opening first country's region.
    var country      = $('.module-ads-locations .country-title').first();
    var regionTitle  = country.find('.region.title').first();
    var regions      = country.parent().find('.regions').first();
    var region       = regions.find('.region-title').first();
    
    country.addClass('open');
    regionTitle.addClass('open');
    regions.show();
    region.addClass('open');
    region.parent().find('.cities').show();
    
    
  });
  
})(jQuery)
