#include "main.h"
#include <unistd.h>
/**
 * print_sign - prints sign of numbers
 * @n: number to be checked for
 * Return: (1) and prints ('+') if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints ('-') if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('\n');

	return (0);
}
