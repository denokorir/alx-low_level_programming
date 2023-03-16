#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with constant byte
 * @x: memory to fill
 * @c: characters to fill
 * @n: number of bytes to be filled
 * Return: * to filled memory area
 */
char *_memset(char *x, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		x[i] = c;

	return (x);
}
/**
 * _calloc - allocate memory for an array using malloc
 * it is malloc followed by memset
 * @nmemb: size of array
 * @size: size of each element
 * Return: * to new allocated memory
 * NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
