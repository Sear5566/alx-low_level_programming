#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int rep = 1, i;

	for (i = 0; i < index; i++, rep <<= 1)
	{
		if (rep > rep << 1)
			return (-1);
	}
	*n |= 1 << index;
		return (1);
}
