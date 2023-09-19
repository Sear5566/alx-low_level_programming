#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: character pointer
  * Return: the length of a string
*/
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
	{
		i++;
	}
		return (i);
}
