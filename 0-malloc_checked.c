#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - a function that creates an array of char
  * @b: a type of unsigned integer
  * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
