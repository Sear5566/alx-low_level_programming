#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name followed by a new line.
 * @argc: type int argument
 * @argv: type character pointer argument of a string.
 * Return: 0 meaning success
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
