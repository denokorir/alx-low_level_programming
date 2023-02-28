#include "main.h"
/**
 * rev_string - reverses a string
 * @s: variable
 * Return: 0
 */
void rev_string(char *s)
{
	int x, y;
	char ch;

	for (x = 0; s[x] != '\0'; ++x)
		;

	for (y = 0; y < x / 2; ++y)
		;
	{
		ch = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = ch;
	}
}
