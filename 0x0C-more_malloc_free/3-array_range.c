#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * ordered from min to max
 * @min: minimum no. of elements
 * @max: maximum no. of elements
 * if min > max && malloc fails, return NULL
 * Return: * to new array
 */
int *array_range(int min, int max)
{
	int a, *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
	{
		arr[a] = min;
		min++;
	}

	return (arr);
}
