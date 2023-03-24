#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * if separator == NULL, don'r print
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, int));

		if (count != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
