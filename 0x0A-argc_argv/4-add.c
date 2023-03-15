#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add +ve numbers
 * @argc: count
 * @argv: vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);

	return (0);
}
