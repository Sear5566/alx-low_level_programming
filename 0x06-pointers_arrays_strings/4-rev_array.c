#include "main.h"

/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: pointer to an array
  * @n: number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i, rev;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n--] = rev;
	}
}
