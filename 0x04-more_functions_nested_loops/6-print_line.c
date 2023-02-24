#include "main.h"
/**
 * print_line - function that draws a straight line in the teminal
 * @n: variable
 * number of times _ should be printed
 * Return: if n <= 0, print newline
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
