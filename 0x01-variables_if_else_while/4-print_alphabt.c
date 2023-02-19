#include <stdio.h>
/**
 * main - printing alphabets in lower case except q and e
 * return: 0.
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		putchar(lc);
	}

	putchar('\n');

	return (0);
}
