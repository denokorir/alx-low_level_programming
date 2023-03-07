#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string with character
 * @c: character to locate
 * Return: pointer to first occurence of character
 * NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

		if (c == '\0')
		{
			return (s);
		}
	return (0);
}
