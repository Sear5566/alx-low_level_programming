#include <stdio.h>
/**
  *main - displays lowercase alphabet in reverse
  *Return: always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 122; a >= 96; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
