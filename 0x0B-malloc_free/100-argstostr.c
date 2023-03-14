#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments of my program
 * @ac: var
 * @av: var
 * Return: NULL if ac == 0 || av == NULL
 * return * to new string, NULL if failure
 */
char *argstostr(int ac, char **av)
{
	/*declare variables*/
	char *str;
	int arg, byte, index, size = ac;

	/*check if arguments are valid*/
	if (ac == 0 || av == NULL)
		return (NULL);

	/*find total size of string needed*/
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		size++;
	}

	/*allocate memory for the string*/
	str = malloc(sizeof(char) * size + 1);

	/*check if malloc was successful*/
	if (str == NULL)
		return (NULL);

	/*copy each argument to the string, add \n*/
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		str[index++] = av[arg][byte];

		str[index++] = '\n';
	}
	/*add null terminator at the end*/
	str[size] = '\0';

	return (str);
}
