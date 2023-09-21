#include "main.h"

/**
  * _strcat - function that concatenates two strings
  * @dest: string character pointer
  * @src: string character pointer
  * Return: a pointer to the resulting string 'dest'.
*/

char *_strcat(char *dest, char *src)
{
	int sl, x;

	sl = 0;
	while (dest[sl] != '\0')
	{
		sl++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[sl] = src[x];
		x++;
		sl++;
	}
	dest[sl] = '\0';
	return (dest);
}
