#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *x = s;

	while (n > 0)
	{
		*x = b;
		x++;
		n--;
	}
	return (s);
}
