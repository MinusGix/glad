{% include spec.name + '.hpp' %}

/* Source */
#ifdef GLAD_{{ feature_set.name|upper }}_IMPLEMENTATION
{% include spec.name + '.cpp' %}

#endif /* GLAD_{{ feature_set.name|upper }}_IMPLEMENTATION */

