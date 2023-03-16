#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * Return: * to allocated memory
 * if it fails, cause normal termination
 * @b: no. of bytes to allocate
 * status value of 98
 */
void *malloc_checked(unsigned int b)
{
	/*declare pointer to store address of allocated mem*/
	void *p;
	/*allocate the requested memory size*/
	/*store the pointer to the allocated mem in p*/
	p = malloc(b);

	/*check if malloc was successful*/
	if (p == NULL)
	{
		/*if it failed, terminate with status value of 98*/
		exit(98);
	}
	/*if p isn't NULL, return * to allocated mem*/
	return (p);
}
