#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
