#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initializes a variable of type struct dog.
 * @d: a type of struct for dog.
 * @name: a type of char
 * @age: a type of float
 * @owner: a type of char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
