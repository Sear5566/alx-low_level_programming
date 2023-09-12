#include "main.h"
/**
  * print_alphabet_x10 - prints alphabet 10 times
  * Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int i;
	int a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
