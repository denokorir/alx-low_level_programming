#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * program prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
