#include "main.h"

/**
  * _memcpy - a function that copies memory to area
  * @dest: a type of pointer for a character
  * @src: a type of pointer for a charcter
  * @n: a type of pointer from src to dest
  * Return: dest pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
