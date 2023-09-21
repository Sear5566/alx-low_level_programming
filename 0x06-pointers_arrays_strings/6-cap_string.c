#include "main.h"

/**
  * cap_string - function that capitalizes all words of a string
  * @s: pointer for string to be capitalized
  * Return: the string.
*/

char *cap_string(char *s)
{
	int scount = 0;

	while (s[scount] != '\0')
	{
		if (s[scount] >= 97 && s[scount] <= 122)
		{
			s[scount] -= 32;
		}
		if (s[scount] == ' ' || s[scount] == '\t' || s[scount] == '\n'
		|| s[scount] == ',' || s[scount] == ';' || s[scount] == '.'
		|| s[scount] == '!' || s[scount] == '?' || s[scount] == '"'
		|| s[scount] == '(' || s[scount] == ')' || s[scount] == '{'
		|| s[scount] == '}')
		{
			if (s[scount + 1] >= 97 && s[scount + 1] <= 122)
			{
				s[scount + 1] -= 32;
			}
		}
		scount++;
	}
	return (s);
}
