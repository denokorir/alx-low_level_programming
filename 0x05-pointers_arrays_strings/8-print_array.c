#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @n: variable number of elements to be printed
 * @a: pointer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;
	for (n--; n >= 0; n--, x++)
	{
		printf("%d", a[x]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
