#include "main.h"
/**
 * print_square - print a square
 * @a: integer variable
 * Return: Always 0
 */
void print_square(int a)
{
	int i = 0, ii;

	while (i < a && a > 0)
	{
		ii = 0;
		while (ii < a)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
