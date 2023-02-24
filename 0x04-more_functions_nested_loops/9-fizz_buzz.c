#include <stdio.h>
/**
 * main - entry point
 * print fizz for multiples of 3, buzz for multiples of 5
 * fizzbuzz for multiples of both 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
