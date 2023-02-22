#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number ask
 * @int: integer in ASCII code
 * Return: value of the last digit
 */

int print_last_digit(int)
{
	int n;
	
	ld = n % 10;

	if (ld < 0)
	{
	ld = ld * -1;

		_putchar(ld + '0');
	}

	_putchar('\n')

	return (ld);
}
