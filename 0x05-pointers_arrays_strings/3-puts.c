#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: length of string
 * return: void
 */
void _puts(char *str)
{
	while (*str)

	{
		putchar(*str);
		str++;
	}

	putchar('\n');

}
