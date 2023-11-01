#include "main.h"

/**
 * main - a program that copies the content
 * of a file to another file.
 * @ac: Number arg
 * @av: args
 * Return: Always 0.
*/
int main(int ac, char *av[])
{
	int id1, id2;
	int count = 0, count1 = 0;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	id1 = open(av[1], O_RDONLY);
	if (id1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	id2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (id2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		count = read(id1, buffer, 1024);
		if (count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		count1 = write(id2, buffer, count);
		if (count1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	} while (count == 1024);
	if (close(id1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", id1), exit(100);
	if (close(id2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", id2), exit(100);
	return (0);
}
