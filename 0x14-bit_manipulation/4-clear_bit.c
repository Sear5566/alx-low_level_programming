#include "main.h"
/**
 * clear_bit - a function that sets the value of a
 * bit to 0 at a given index.
 * @n: pointer to n
 * @index: index
 * Return: 1 if it works, or -1 if error occurs
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int rep = 1, i;

	for (i = 0; i < index; i++)
	{
		if (rep > rep << 1)
			return (-1);
		rep <<= 1;
	}
	*n &= ~rep;
	return (1);
}
