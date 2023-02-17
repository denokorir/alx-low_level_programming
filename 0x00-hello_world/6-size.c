#include <stdio.h>
/**
 * main - print size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of a short: %zu byte(s)\n", sizeof(short));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long: %zu byte(s)\n", sizeof(long));
	return (0);
}
