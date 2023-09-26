#include "main.h"
/**
 * print_chessboard - a Funtion that prints the chessboard.
 * @a:type char str
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	i = 0;
	while (i < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[i][x]);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
