#include "main.h"

/**
 * print_line - draws a straight line using the _ character
 * @n: number of times character (_) should be printed
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
