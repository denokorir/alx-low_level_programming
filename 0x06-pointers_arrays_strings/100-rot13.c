#include "main.h"
/**
 * rot13 - encode a string using rot13
 * @x: string to encode
 * Return: 0
 */
char *rot13(char *x)
{
	int i;
	int j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(x + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(x + i))
			{
				*(x + i) = b[j];
				break;
			}
		}
	}
	return (x);
}
