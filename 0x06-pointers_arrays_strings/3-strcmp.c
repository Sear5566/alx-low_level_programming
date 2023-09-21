#include "main.h"

/**
  * _strcmp - function that compares two strings
  * @s1: pointer for first string
  * @s2: pointer for second string
  * Return: a value < than 0 if compared strings is lesser than the other
  *		a value > than 0 if strings is greater than the other &
  *		0 if strings are equal.
*/

int _strcmp(char *s1, char *s2)
{
	int value, comp;

	value = 0;
	while (s1[value] == s2[value] && s1[value] != '\0')
	{
		value++;
	}
	comp = s1[value] - s2[value];
	return (comp);
}
