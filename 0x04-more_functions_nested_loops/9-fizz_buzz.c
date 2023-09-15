#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: always 0 (success)
*/
int main(void)
{
	int numb;

	for (numb = 1; numb <= 100; numb++)
	{
		if (numb % 15 == 0)
			printf("FizzBuzz");
		else if (numb % 3 == 0)
			printf("Fizz");
		else if (numb % 5 == 0)
			printf("Buzz");
		else
			printf("%d", numb);
		if (numb == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
