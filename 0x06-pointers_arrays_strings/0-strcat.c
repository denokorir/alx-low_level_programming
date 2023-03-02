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

	while (*dest[i] != '\0')
	{
		dest++;
	}

	while (*src[j] != '\0')
	{
		*dest[i] = *src[j];
		i++;
		j++;
	}
	*dest[i] = '\0';
	return (dest);
}
