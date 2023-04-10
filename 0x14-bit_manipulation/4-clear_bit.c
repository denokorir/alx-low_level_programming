#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer with the integer with bits to be set
 * @index: position of bit to be set to 0
 * Return: 1 if successful, -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
