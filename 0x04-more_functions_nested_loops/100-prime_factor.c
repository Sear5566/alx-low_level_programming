#include <stdio.h>
#include "main.h"
/**
 * main - Finds and prints the largest prime factor
 * of the number 612852475143
 * Return: always 0 (success)
*/
int main(void)
{
	long int i, numb = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		if ((numb % i == 0) && (numb != i))
			numb = numb / i;
	}
	printf("%ld\n", numb);
	return (0);
}
