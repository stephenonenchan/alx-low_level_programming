#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * return: 0.
 */
int main(void)
{
	int n;
	char lx;

	for (n = 0; n < 10; n++)
		putchar(n % 10 + '0');

	for (lx = 'a'; lx <= 'f'; lx++)
		putchar(lx);

	putchar('\n');

	return (0);
}
