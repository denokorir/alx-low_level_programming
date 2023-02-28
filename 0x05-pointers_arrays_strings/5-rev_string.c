#include "main.h"
/**
 * rev_string - reverses a string
 * @s: variable
 * Return: 0
 */
void rev_string(char *s)
{
	int x, y, z;
	char ch;

	for (x = 0; s[x] != '\0'; x++)
	
	y = 0;
	z = x / 2;

	while (z--)
	{
		ch = s[x - y - 1];
		s[x - y - 1] = s[y];
		s[y] = ch;
		y++;
	}
}
