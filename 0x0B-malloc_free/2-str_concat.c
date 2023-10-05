#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: pointer type of char.
 * @s2: pointer type of char.
 * Return: NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
	char *pstr = NULL;
	unsigned int len;
	unsigned int x, y, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}
	len = x + y + 1;
	pstr = malloc(sizeof(char) * len);

	if (pstr == NULL)
		return (NULL);
	i = 0;
	while (i < x)
	{
		pstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < y)
	{
		pstr[i] = s2[j];
		i++;
		j++;
	}
	pstr[len] = s2[j];
	return (pstr);
}
