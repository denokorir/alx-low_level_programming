#include "main.h"
/**
 * print_alphabet - Entry point
 * print lowercase alphabets then newline
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
