#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination character string pointer
 * @src: source string pointer
 * @n: number of elements to concatenate with
 * Return: pointer resulting to string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int sl, x;

	sl = 0;
	while (dest[sl] != '\0')
	{
		sl++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[sl] = src[x];
		x++;
		sl++;
	}
	dest[sl] = '\0';

	return (dest);
}
