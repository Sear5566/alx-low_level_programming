#include "main.h"

/**
  * _strcpy - function that copies the string pointed to by src
  * including the terminating null byte (\0),
  * to the buffer pointed to by destination.
  * @dest: pointer type string
  * @src: pointer type string
  * Return: pointer to @dest.
*/
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
	dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
