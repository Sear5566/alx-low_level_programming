#include "main.h"
/**
  * print_diagonal - draws a diagonal line
  * @n: number of times character \ should be printed
*/
void print_diagonal(int n)
{
	 int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
