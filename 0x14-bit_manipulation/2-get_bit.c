#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer with bit
 * @index: index of bit
 * Return: index, -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
