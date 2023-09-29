#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string
 * @s: string in view
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
