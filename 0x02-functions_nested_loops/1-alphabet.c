#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - make the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
		_putchar(c);

	_putchar('\n');
}
