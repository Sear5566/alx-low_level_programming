#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - a function that returns the sum of all parameters
  * @n: a constant type of unsigned int n
  * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	sum = i = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
