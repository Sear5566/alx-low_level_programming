#include "main.h"
/**
  * print_square - draws a square
  * @size: number of times character \ should be printed
*/
void print_square(int size)
{
	int i, a;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (a = 0; a < (size); a++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
