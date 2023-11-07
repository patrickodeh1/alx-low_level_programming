#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - a struct dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL || (*d).name == "")
			printf("Name : (nil)\n");
		else
			printf("Name : %s\n", (*d).name);

		printf("Age : %f\n", (*d).age);

		if ((*d).owner == NULL || (*d).owner == "")
			printf("Owner : (nil)\n");
		else
			printf("Owner : %s\n", (*d).owner);
	}
}
