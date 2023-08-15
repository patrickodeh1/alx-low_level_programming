#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog -  creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *own, *nm;

	nm = malloc(sizeof(*name) * (strlen(name) + 1));
	own = malloc(sizeof(*owner) * (strlen(owner) + 1));
	p = malloc(sizeof(dog_t));

	if (nm && own && p)
	{
		strcpy(nm, name);
		strcpy(own, owner);
		p->name = nm;
		p->age = age;
		p->owner = own;
	}
	else
	{
		free(nm);
		free(own);
		free(p);
		return (NULL);
	}
	return (p);
}
