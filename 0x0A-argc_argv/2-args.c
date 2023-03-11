#include <stdio.h>
/**
 * main - prints all arguments received
 * @argc: number of arguments passed
 * @argv: array string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
