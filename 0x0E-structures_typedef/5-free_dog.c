#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: pointer
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
