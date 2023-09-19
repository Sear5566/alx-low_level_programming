#include "main.h"
#include <stdio.h>

/**
  *print_array - function that displays n elements of an array
  *of integers.
  *@a: pointer input array
  *@n: number of elements to be printed
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
