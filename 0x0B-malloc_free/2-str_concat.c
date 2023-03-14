#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: * to new space, NULL if empty || 0
 * s1 then s2
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int x, y;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find the length of s1 & s2*/
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	/*add 1 at the end of str char*/
	/*for the null terminator*/
	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	/*add s1 to array s*/
	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];

	/*add s2 to array*/
	for (y = 0; s2[y] != '\0'; y++)
	{
		s[x] = s2[y];
		x++;
	}
	/*null terminate the new string*/
	s[x] = '\0';

	return (s);
}
