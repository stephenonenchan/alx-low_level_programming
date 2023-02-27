#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: length od string asked
 * return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	while (i)
	{
		s--;
		putchar(*s);
		i--;
	}

	putchar('\n');
}
