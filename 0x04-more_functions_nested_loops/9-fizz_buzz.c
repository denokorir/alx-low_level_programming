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
	if (i % 3 == 0)
	{
		printf("%d Fizz \n", i);
	}
	else if (i % 5 == 0)
	{
		printf("%d Buzz \n", i);
	}
	else if (i % 15 == 0)
	{
		printf("%d FizzBuzz \n", i);
	}
	else
		printf("%d \n", i);
}
}
