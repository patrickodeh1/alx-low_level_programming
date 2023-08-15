#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (!d->age)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
