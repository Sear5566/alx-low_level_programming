#include "main.h"

/**
  * _strncpy - a function that copies a string
  * @dest: destination character string pointer
  * @src: destination character string pointer
  * @n: number of elements to be used
  * Return: pointer to destination resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{

	int sl;

	sl = 0;
	while (sl < n && src[sl] != '\0')
	{
		dest[sl] = src[sl];
		sl++;
	}
	for (; sl < n; sl++)
	dest[sl] = '\0';

	return (dest);
}
