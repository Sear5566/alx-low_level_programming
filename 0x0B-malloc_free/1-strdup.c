#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns *p to new alloc spc in mem,
 *contains copy of the string given as a parameter.
 * @str: type of char that holds the memory value.
 * Return: NULL if str is = NULL, or if memeory is insufficient.
*/
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc((sizeof(*a) * i) + 1);
	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[j] = str[j];
	a[j] = '\0';

	return (a);
}
