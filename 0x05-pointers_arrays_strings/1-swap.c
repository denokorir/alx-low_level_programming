#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a: int 1
 * @b: int 2
 * introduce a third int x
 * Result: 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
