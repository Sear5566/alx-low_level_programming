#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: a type of int representing the minimum size
 * @max: a type of int representing the maximum size
 * Return: NULL if malloc fails or min > max
*/
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		*(a + i) = min;

	return (a);
}
