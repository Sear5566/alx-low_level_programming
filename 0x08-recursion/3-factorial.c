#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: given number
 * Return: 0 if successful and -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 3)
	{
		return (n);
	}
	else
		return (n * factorial(n - 1));
}
