#include <stdio.h>
/**
 * main - progamming  using printf
 * return: always 0: (success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(unsigned long int));
	printf("Size of an int: %li byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(unsigned long int));
	printf("size of a float: %ld byte(s)\n", sizeof(unsigned long int));
	return (0);
}
