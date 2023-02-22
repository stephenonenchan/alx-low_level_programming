#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
	}
}
