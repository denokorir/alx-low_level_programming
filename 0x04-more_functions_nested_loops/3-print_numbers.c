#include "main.h"
/**
 * print_numbers - entry point
 * print numbers from 0 - 9 then newline
 * Return: Always 0
 */
void print_numbers(void)
{
	char x = 0;

	while (x <= 9)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
