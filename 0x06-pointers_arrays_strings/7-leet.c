#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: character to string pointer
 * Return: pointer to 'str'
 */
char *leet(char *str)
{
	int sl, c;
	char leetalph[] = "aAeEoOtTlL";
	char leetNumb[] = "4433007711";

	sl = 0;
	while (str[sl] != '\0')
	{
		c = 0;
		while (c < 10)
		{
			if (leetalph[c] == str[sl])
			{
				str[sl] = leetNumb[c];
			}
			c++;
		}
		sl++;
	}
	return (str);
}
