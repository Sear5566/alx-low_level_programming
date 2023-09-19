#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 * @s: string pointer
*/
void rev_string(char *s)
{
	int i, a, rev;

	for (i = 0; s[i] != '\0'; i++)
	a = 0;
	i = i - 1;

	while (a < i)
	{
		rev = s[i];
		s[i] = s[a];
		s[a] = rev;
		a++;
		i--;
	}
}
