
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: a type of unsigned int
 * @size: a type of unsigned int, element size
 * Return: NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a = NULL;
	char *s;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (a);

	a = malloc(nmemb * size);
	if (a == 0)
		return (NULL);
	s = (char *)a;
	for (x = 0; x < (nmemb * size); x++)
		*(s + x) = 0;

	return (s);
}
