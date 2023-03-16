#include "main.h"
#include <string.h>
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
	unsigned int ln1, ln2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ln1 = strlen(s1);
	ln2 = strlen(s2);

	str = malloc(ln1 + n + 1);

	if (str == NULL)
		return (NULL);

	memcpy(str, s1, ln1);

	memcpy(str + ln1, s2, n);

	str[ln1 + n] = '\0';

	return (str);
}
