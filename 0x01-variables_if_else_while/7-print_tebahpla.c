#include <stdio.h>
/**
 * main - prints alpha in lowercase in reverse
 * return: 0.
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);

	putchar('\n');

	return (0);
}
