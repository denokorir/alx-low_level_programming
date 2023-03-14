#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to new space in memory
 * space contains copy of string given as a parameter
 * @str: duplicate, new string
 * strdup returns pointer to new string
 * new string is a duplicate of str
 * Return: NULL if str = NULL, * to duplicate if 0
 */
char *_strdup(char *str)
{
	char *p;
	int x, y;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	p = malloc(sizeof(char) * (x + 1));

	if (p == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		p[y] = str[y];

	return (p);
}
