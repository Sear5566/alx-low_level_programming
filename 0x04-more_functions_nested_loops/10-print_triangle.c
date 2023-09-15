#include "main.h"
/**
  * print_triangle - draws a triangle
  * @size: size of the triangle
*/
void print_triangle(int size)
{
	int i, d, e;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (d = size - i; d >= 1; d--)
		{
		_putchar(' ');
		}
		for (e = 1; e <= i; e++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
