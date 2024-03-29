#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: name to be printed
 * @f: function pointer taking char pointer argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
