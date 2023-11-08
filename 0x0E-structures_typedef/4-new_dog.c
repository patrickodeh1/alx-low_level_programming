#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = strdup(name);
	(*d).owner = strdup(owner);
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
		return (NULL);
	}
	free((*d).name);
	free((*d).owner);
	free(d);
	(*d).age = age;
	return (d);
}
