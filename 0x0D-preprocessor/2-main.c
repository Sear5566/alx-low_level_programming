#include <stdio.h>

/**
  * main - a function that prints the name of the file it's compiled from
  * Return: 0 meaning success
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
