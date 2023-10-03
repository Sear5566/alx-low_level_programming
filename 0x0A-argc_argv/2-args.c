 #include <stdio.h>

/**
 * main - a program that prints all arguments it received.
 * @argc: type int argument
 * @argv: type character pointer argument of string.
 * Return: 0 meaning success
*/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
