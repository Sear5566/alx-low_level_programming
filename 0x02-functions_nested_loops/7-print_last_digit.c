#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: the number to be printed
  * Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
		_putchar(-d + 48);
		return (d * -1);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
