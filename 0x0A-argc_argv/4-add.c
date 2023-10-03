#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type character pointer argument of a string.
 * Return: if one of number contains symbols not digits print error, return 1.
*/
int main(int argc, char *argv[])
{
	int x, y;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[x]);
		}
	}
	printf("%d\n", add);
	return (0);
}
