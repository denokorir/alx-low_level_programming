#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				count++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
