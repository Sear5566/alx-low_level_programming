#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to flip.
 * @n: pointer for number to flip
 * @m: pointer for number
 * Return: number of bits you would need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;

	n = n ^ m;
	while (n)
	{
		n &= (n - 1);
		++b;
	}
	return (b);
}
