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

	else if (b[str] != '0' && b[str] != '1')
			return (0);

	for (str = 0; b[str] != '\0'; str++)
	{
		conv_num <<= 1;
		conv_num += b[str] - '0';
	}
	return (conv_num);
}
