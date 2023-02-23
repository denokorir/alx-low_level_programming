#include "main.h"
/**
 * _isdigit - entry point
 * function that checks for a digit (0 through 9).
 * @c: integer variable
 * Return: 1 if true, 0 otherwisw
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
