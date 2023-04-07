#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string containing binary numbers
 * Return: converted number, 0 if not 0 or 1 && if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int str = 0;
	unsigned int conv_num = 0;

	if (b[str] == '\0')
		return (0);

	while ((b[str] == '0') || (b[str] == '1'))
	{
		conv_num <<= 1;
		conv_num += b[str] - '0';
		str++;
	}
	return (conv_num);
}
