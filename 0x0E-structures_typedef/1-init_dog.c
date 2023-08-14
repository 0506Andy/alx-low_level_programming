#include "dog.h"

#include <stdlib.h>

/**
 * init_dog - initialise a variable of type
 * @d:pointer that points to dog
 * @name:1st to be initialised
 * @age:2nd to be initialised
 * @owner:3rd to be initialised
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
