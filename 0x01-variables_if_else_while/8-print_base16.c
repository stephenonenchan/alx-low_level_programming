#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0.
 */
int main(void)
{
	char lx;

	for (lx = 0; lx < 10; lx++)
		putchar(lx);

	for (lx = 'a'; lx <= 'f'; lx++)
		putchar(lx);

	putchar('\n');

	return (0);
}
