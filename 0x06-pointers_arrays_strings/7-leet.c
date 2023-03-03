#include "main.h"
/**
 * leet - encode a string to 1337
 * @z: input value
 * Return: z
 */
char *leet(char *z)
{
	int a, b;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (a = 0; z[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (z[a] == x[b])
			{
				z[a] = y[b];
			}
		}
	}
	return (z);
}
