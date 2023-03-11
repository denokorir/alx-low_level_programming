#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: number of arguments passed
 * @argv: array string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{

		printf("%s\n", argv[i]);
		i++;
		}
	}

	return (0);
}
