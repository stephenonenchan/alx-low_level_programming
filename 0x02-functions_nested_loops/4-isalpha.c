#include "main.h"
#include <unistd.h>
/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercas && 0 otherwise
 * @c: character in ASCII code
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
		return (1);
	else
		return (0);

	_putchar('\n');
}
