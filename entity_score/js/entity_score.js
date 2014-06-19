/**
 * @file
 * Client-side script for better user experience.
 */
(function($) {

  $(function() {


    var toggleAll = function (value) {
      $(this).closest('fieldset').find('tbody tr').toggleClass('disabled', !this.checked);
      $(this).closest('fieldset').find('thead tr').toggleClass('disabled', !this.checked);
      $(this).closest('fieldset').find('.groups-boost-enabled').prop('checked', this.checked);
    };

    var checkClick = function () {

      var anyChecked = false;

      $(this).closest('fieldset').find('.groups-boost-enabled').each(function() {
        anyChecked |= this.checked;

        $(this).closest('tr').toggleClass('disabled', !this.checked);
      });


      $(this).closest('fieldset').find('thead tr').toggleClass('disabled', !anyChecked);
      $(this).closest('fieldset').find('.groups-enable-all-boosts').prop('checked', anyChecked);

    };

    $('input.groups-enable-all-boosts').click(function (self) {
      toggleAll.apply (this);
    });

    $('input.groups-boost-enabled').click(function () {
      checkClick.apply(this);
    });

    $('.groups-boost-enabled:first-child').each(function () {
      checkClick.apply(this);
    });

    $('#ads-score-settings-form select').change(function () {
        $(this).closest('tr').find('input[type=text]').css({visibility: this.value == 20 /* Callback*/ ? 'hidden' : 'visible'});
    });

    $('#ads-score-settings-form select').change();

  });

})(jQuery);
