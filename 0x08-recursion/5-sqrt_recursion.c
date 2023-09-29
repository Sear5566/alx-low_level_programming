#include "main.h"

/**
  * numb - function that evaluates from 1 to n
  * @x: integer representing n
  * @y: integer that iterates from 1 to n
  * Return: -1 if n doesn't have a natural square root, 0 on success.
*/
int numb(int x, int y)
{
	if (x == y * y)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
		return (numb(x, y + 1));
}

/**
  * _sqrt_recursion - function that returns the natural square root
  * @n: type of integer
  * Return: -1 if n doesn't have a natural square root, 0 on success.
*/
int _sqrt_recursion(int n)
{
	return (numb(n, 1));
}
