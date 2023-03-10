#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of char
 * initialize with a specific char
 * @size: size of array
 * @c: char to initialize with
 * Return: * to array, NULL if error
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
