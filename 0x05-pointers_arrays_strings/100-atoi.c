#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string into integer.
 * @s: Type char pointer
 * Return: Always 0 if succesful.
*/
int _atoi(char *s)
{
	int n, a, f;

	f = 1;
	a = n = 0;

	while (((s[a] < '0') || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
		f = f * -1;
		a++;
	}
	while (((s[a] >= '0') && s[a] <= '9') && s[a] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[a] - '0');
			a++;
		}
		else
		{
			n = n * 10 - (s[a] - '0');
			a++;
		}
	}
	f = f * -1;
	return (n * f);
}
