/**
 * @file
 * Support for "time ago" date/time auto replacement.
 */
(function ($) {

  var dateTimeDistance = function(date) {
    var distanceMilis = (new Date().getTime() - date.getTime());
    return {
      miliseconds: distanceMilis,
      seconds: parseInt(distanceMilis / 1000),
      min: parseInt(distanceMilis / 60000),
      hours: parseInt(distanceMilis / 3600000),
      days: parseInt(distanceMilis  / 86400000)
    };
  }

  var dateTimeParse = function(iso8601) {
    var s = $.trim(iso8601);
    s = s.replace(/\.\d+/,""); // Remove milliseconds.
    s = s.replace(/-/,"/").replace(/-/,"/");
    s = s.replace(/T/," ").replace(/Z/," UTC");
    s = s.replace(/([\+\-]\d\d)\:?(\d\d)/," $1$2"); // -04:00 -> -0400
    s = s.replace(/([\+\-]\d\d)$/," $100"); // +09 -> +0900
    return new Date(s);
  }

  var dict = {
    suffixAgo: Drupal.t("ago"),
    day: Drupal.t("a day"),
    days: Drupal.t("%d days"),
    today: Drupal.t("today"),
  };

  $(function () {
    $('span.time-ago-days').each(function () {
      var dateTime = dateTimeParse(this.getAttribute("title"));
      var distance = dateTimeDistance(dateTime);

      if (distance.days == 0) {
        this.innerHTML = dict.today;
      }
      else {
        var textSuffix = dict.suffixAgo;
        var textDays   = distance.days == 0 ? dict.today : (distance.days == 1 ? dict.day : dict.days);
        this.innerHTML = textDays.replace(/%d/, distance.days) + " " + textSuffix;
      }
    });
  });

})(jQuery);