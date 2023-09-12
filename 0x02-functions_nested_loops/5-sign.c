#include "main.h"
/**
  * print_sign - prints the sign of a number
  * @n: the number to be printed
  * Return: 1 and prints + if number is greater than zero,
  * 0 and prints 0 if number is zero,
  * -1 and prints - if number is less than zero.
*/
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 48)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
