#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @x: x is an integer
 * Return: Always 0
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
