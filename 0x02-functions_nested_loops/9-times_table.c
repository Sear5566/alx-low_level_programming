#include "main.h"
/**
  * times_table - prints the 9 times table
  * starting with 0.
*/
void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 1; m <= 9; m++)
		{
		_putchar(48);
		_putchar(44);
		_putchar(32);

		p = n * m;
		if (p <= 9)
			_putchar(32);
		else
			_putchar((p / 10) + 48);
		_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
