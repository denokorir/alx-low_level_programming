#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: integer value received
 * Return: 1 if c is a letter, 0 otherwisw
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
