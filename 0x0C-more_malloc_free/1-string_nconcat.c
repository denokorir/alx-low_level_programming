#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: * to new space, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = n, y, ln1, ln2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y]; y++)
		x++;

	str = malloc(sizeof(char) * (x + 1));

	if (str == NULL)
		return (NULL);

	x = 0;

	for (y = 0; s1[y]; y++)
		str[x++] = s1[y];

	for (y = 0; s2[y] && y < n; y++)
		str[x++] = s2[y];

	str[x] = '\0';

	return (str);
}
