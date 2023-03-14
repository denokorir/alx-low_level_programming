#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: NULL on failure
 * if w || h = 0, NULL
 */
int **alloc_grid(int width, int height)
{
	/*declare a * to a * to an int*/
	int **ptr;
	/*declare two int vars for height and width*/
	int w, h;

	/*check validity of dimensions*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate memory for rows of the 2D array*/
	ptr = malloc(sizeof(int *) * height);
	/*(int *) casts the result of malloc to a * to an int*/
	if (ptr == NULL)
		return (NULL);

	/*allocate memory for each column of each row*/
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			/*free prev malloc if allocation fails*/
			for (; h >= 0; h++)
				free(ptr[h]);
			free(ptr);
			return (NULL);
		}
	}

	/*initialize all elements of 2D array to 0*/
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			ptr[h][w] = 0;
	}
	return (ptr);
}
