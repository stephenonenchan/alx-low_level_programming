#include <stdio.h>
/**
 * main - Entry point: prints the size of various data types in a computer
 * return: always 0: (success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(unsigned long int));
	printf("Size of a int: %li byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(unsigned long int));
	printf("size of a float: %ld byte(s)\n", sizeof(unsigned long int));
	return (0);
}
