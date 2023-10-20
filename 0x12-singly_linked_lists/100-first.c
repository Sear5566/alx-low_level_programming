#include <stdio.h>

void before(void) __attribute__((constructor));

/**
  * before - a function that prints message before main function is executed
*/
void before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
