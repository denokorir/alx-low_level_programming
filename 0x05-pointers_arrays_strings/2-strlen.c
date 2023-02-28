#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: variable
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; ++s)
		++length;

	return (length);
}
