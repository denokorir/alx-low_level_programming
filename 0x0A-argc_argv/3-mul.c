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
	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
}
