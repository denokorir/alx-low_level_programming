#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of parameters
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count, sum = 0;

	va_start(args, n);

	for (count = 0; count < n; count++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
