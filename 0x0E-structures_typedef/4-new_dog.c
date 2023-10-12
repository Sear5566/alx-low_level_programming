#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: a type of pointer char.
 * @age: a type of pointer float
 * @owner: a type of pointer char.
 * Return: django.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *django;
	char *i, *j;
	int k, l, m;

	django = malloc(sizeof(struct dog));
	if (django == NULL)
		return (NULL);

	for (k = 0; *(name + k) != '\0'; k++)
		;
	for (l = 0; *(owner + l) != '\0'; l++)
		;
	i = malloc(sizeof(char) * k + 1);
	if (i == NULL)
	{
		free(django);
		return (NULL);
	}
	j = malloc(sizeof(char) * l + 1);
	if (j == NULL)
	{
		free(i);
		free(django);
		return (NULL);
	}
	for (m = 0; m <= k; m++)
		*(i + m) = *(name + m);
	for (m = 0; m <= l; m++)
		*(j + m) = *(owner + m);

	django->name = i;
	django->age = age;
	django->owner = j;

	return (django);
}
