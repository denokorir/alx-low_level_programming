#include "main.h"
/**
 * main - Entry point
 * print _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[] = "_putchar"
	int ch;

	for (ch = 0; ch <= 8; ch++)
		_putchar(letter[ch]);
	_putchar('\n');
	return (0);
}
