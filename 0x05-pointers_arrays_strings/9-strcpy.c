#include "main.h"
/**
 * _strcpy - copy string pointed to by src
 * include null byte \0
 * copy to buffer pointed to by dest
 * @dest: receives value
 * @src: pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
