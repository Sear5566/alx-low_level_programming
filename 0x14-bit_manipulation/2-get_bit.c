#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: pointer to number to convert
 * @index: pointer to index to search
 * Return: byte in the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long exp = 1;

	if (exp > exp << 1)
		return (-1);
	return ((n >> index) & 1);
}
