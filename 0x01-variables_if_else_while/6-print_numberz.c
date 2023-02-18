#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * print single digit numbers of base 10
 * start from 0
 * don't use char
 */
int main(void)
{
	int a;

	for (a =0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
