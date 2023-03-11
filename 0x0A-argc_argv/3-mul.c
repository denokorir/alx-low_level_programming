#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: vector count
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = 1;

		for (x = 1; x < 3; x++)
			y *= atoi(argv[x]);

		printf("%d\n", y);
	}

	return (0);
}
