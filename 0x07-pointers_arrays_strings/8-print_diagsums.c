#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum
 * of the two digonal of a square.
 * @a: type of pointer character string
 * @size: type of integer
*/
void print_diagsums(int *a, int size)
{
	int x, val, sum, sum2;

	x = 0;
	val = 0;
	sum = 0;
	sum2 = 0;
	while (x < (size * size))
	{
		val = a[x];
		sum = sum + val;
		x = x + size + 1;
	}
	x = size - 1;
	while (x < ((size * size) - 1))
	{
		val = a[x];
		sum2 = sum2 + val;
		x = x + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
