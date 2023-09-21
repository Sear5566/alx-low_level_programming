#include "main.h"

/**
  * string_toupper - function that changes all lowercase letters
  * of a string to uppercase.
  * @c: pointer variable
  * Return: always 0 if succesful
*/

char *string_toupper(char *c)
{
	int x;

	x = 0;
	while (c[x] != '\0')
	{
		if (c[x] >= 97 && c[x] <= 122)
		{
			c[x] -= 32;
		}
		x++;
	}
	return (c);
}
