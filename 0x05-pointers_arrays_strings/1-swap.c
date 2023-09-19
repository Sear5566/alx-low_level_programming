#include "main.h"

/**
  *swap_int - function that swaps the value of two integers
  *@a: integer to be swapped
  *@b: integer to be swapped
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = i;
	*a = *b;
	*b = i;
}
