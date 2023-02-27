#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: 1 integer to be swap
 * @b: 2 integer to be swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
