#include "main.h"
/**
 * _strcat - function that cats two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
