#include "main.h"

/**
 * prim - function that evaluates from 1 to n
 * @a: same integer as n
 * @i: integer that iterates from 1 to n
 * Return: 1 if prime number, otherwise 0
*/
int prim(int a, int i)
{
	if (a == i)
	{
		return (1);
	}
	else if (a % i == 0)
	{
		return (0);
	}
	else
		return (prim(a, i + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prim(n, 2));
}
