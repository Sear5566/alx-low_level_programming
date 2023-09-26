#include "main.h"

/**
  * _strchr - function that locates a character in a string
  * @s: type of character pointer
  * @c: type of character for memory area
  * Return: type NULL
*/

char _strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
		s++;
	}
}
