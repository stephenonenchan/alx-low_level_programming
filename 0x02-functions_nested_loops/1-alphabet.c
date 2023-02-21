#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * return: Always 0. (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return (0);
}
