#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - a function that prints a name
 * @name: Type of char string pointer
 * @f: Type pointer func and char is an argument
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
