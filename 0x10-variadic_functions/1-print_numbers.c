#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line.
  * @n: number of arg.
  * @separator: a type char of ", " to be printed between numbers.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_args;
	unsigned int i;
	int integer;

	va_start(my_args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		integer = va_arg(my_args, int);
		if (!(i == n - 1))
		{
			printf("%d%s", integer, separator);
		}
		else
		{
			printf("%d", integer);
		}
	}
	printf("\n");
	va_end(my_args);
}
