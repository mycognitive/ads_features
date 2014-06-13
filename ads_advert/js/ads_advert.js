(function ($) {

  $(function () {

    $('div.search-filters-refine').load('/advert/facets/ajax/id');

    var changedByUser = false;

    $('form.node-advert-form #edit-body-und-0-value').bind('input propertychange', function () {
      if (changedByUser)
      {
        // User aleady changed title by himself so we will no longer
        // autocomplete it.
        return;
      }

      var body                        = this.value;
      var title                       = '';
      var wasAbbreviation             = false;
      var satisfiedAt                 = 0;
      var couldBeSatisfiedAt          = 0;
      var minCharsToSatisfy           = 26;
      var minCharsToSatisfyAtStopWord = 40;
      var maxCharsToSatisfy           = 50;


      // Trying with dot and newline.
      
      for (var i = 0; i < Math.min (body.length, maxCharsToSatisfy) + 1; ++i)
      {
        var c  = body[i];
        var nc = body[i + 1];

        if ((c === undefined || c === '\n' || (!wasAbbreviation && c === '.' && nc === ' ')))
        {
          if ((i + 1 >= minCharsToSatisfy) && (i + 1 <= maxCharsToSatisfy))
            satisfiedAt = i;
        }

        if (c === undefined || (!wasAbbreviation && (c === ' ' || c === '\n' || c === ',')))
        {
          if ((i + 1 >= minCharsToSatisfyAtStopWord) && (i + 1 <= maxCharsToSatisfy))
            couldBeSatisfiedAt = i;
        }

        if  (c === '.')
          wasAbbreviation = nc !== undefined && nc !== ' ' && nc !== '\n';
      }

      if (satisfiedAt !== 0)
        title = body.slice (0, satisfiedAt);
      else
      if (couldBeSatisfiedAt !== 0)
        title = body.slice (0, couldBeSatisfiedAt);
      else
        title = body;

      title = title.replace(/\n+/g, ' ').replace(/[\.,\s]+$/, '').trim ();

      if (title.length + 3 > maxCharsToSatisfy)
          title = title.slice (0, maxCharsToSatisfy - 3) + '...';
      else
        title = title.slice (0, maxCharsToSatisfy);

      $('form.node-advert-form #edit-title').val (title);

    });

    $('form.node-advert-form #edit-title').bind('input propertychange', function () {
      // Title will be no longer autocompleted.
      changedByUser = true;
    });
		
	});
	
}) (jQuery)