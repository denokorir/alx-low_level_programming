#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @x: pointer
 * Return: x
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
