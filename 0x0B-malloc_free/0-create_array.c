#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a pointer function that creates an array of chars.
 * @c: memory value of type char.
 * @size: a type of unsigned int for the memory to print.
 * Return: Null if @size is 0 or if @size fails.
*/
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int a;

	if (size == 0)
		return (NULL);

	n = malloc(sizeof(*n) * size);
	if (n == NULL)
		return (NULL);

	a = 0;
	while (a < size)
	{
		n[a] = c;
		a++;
	}
	return (n);
}
