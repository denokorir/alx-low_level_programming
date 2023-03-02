#include "main.h"
/**
 * _strncpy - fn that copies a string
 * @dest: string destination
 * @src: string source
 * @n: int var
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++
	}
	return (dest);
}
