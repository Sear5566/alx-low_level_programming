#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: pointer representing the number.
*/
void print_binary(unsigned long int n)
{
	unsigned long int rep;

	for (rep = 1; rep < n; rep <<= 1)
	{
		if (rep > rep << 1)
			break;
	}
	if (n != 0 && rep > n)
		rep >>= 1;
	for (; rep > 0; rep >>= 1)
	{
		if (n & rep)
			_putchar('1');
		else
			_putchar('0');
	}
}
