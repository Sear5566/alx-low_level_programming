#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 * @s: string pointer
*/
void rev_string(char *s)
{
	int i, a, h;
	int rev;

	for (i = 0; s[i] != '\0'; i++)
	a = 0;
	h = i / 2;

	while (h--)
	{
		rev = s[i - a - 1];
		s[i - a - 1] = s[a];
		s[a] = rev;
		a++;
	}
}
