#include "function_pointers.h"
/**
 * array_iterator - exec fn given as parameter on @ element of arr
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
