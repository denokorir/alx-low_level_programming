#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments
 * @argv: array string
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
