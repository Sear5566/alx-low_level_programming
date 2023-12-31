#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string length
 * Return: Always 0 upon success.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
