#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte
  * @s: type of pointer for a character
  * @b: type of pointer for a character
  * @n: type of pointer for a character bytes of mem pointed by s with byte b.
  * Return: *s pointer.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
