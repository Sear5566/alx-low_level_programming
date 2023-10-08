#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * string_nconcat - a function that concatenates two strings
  * @s1: pointer of type char
  * @s2: pointer of type char
  * @n: a type of unsigned int
  * Return: NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1);
	a = malloc((len + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len + n)
	{
		if (i < len)
			*(a + i) = *(s1 + i);
		else
		{
			*(a + i) = *(s2 + j);
			j++;
		}
		i++;
	}
	*(a + i) = '\0';

	return (a);
}
