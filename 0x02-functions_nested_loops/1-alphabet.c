#include <stdio.h>
/**
 * print_alphabet - Entry point
 * print lowercase alphabets then newline
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
