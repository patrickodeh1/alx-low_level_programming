#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: pointer
 */

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		free(d);
}
