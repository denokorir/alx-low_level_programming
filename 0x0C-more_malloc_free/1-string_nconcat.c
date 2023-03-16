#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: * to new space, NULL if it fails
 * if n >= s2 length, use s2 string
 * if NULL, empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*declare variables*/
	char *str;
	/*x and y are counters*/
	/*ln1 & ln2 store string lengths*/
	unsigned int x, y, ln1, ln2;

	x = 0;
	y = 0;

	/* find the lengths of s1 & s2*/
	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	/*malloc for str with ln1 + n + 1 or
	 * ln1 + ln2 + 1 byte
	 */
	if (n < ln2)
		str = malloc(sizeof(char) * (ln1 + n + 1));
	else
		str = malloc(sizeof(char) * (ln1 + ln2 + 1));

	/*check if malloc was successful*/
	if (!str)
		return (NULL);

	/*copy s1 to str*/
	while (x < ln1)
	{
		str[x] = s1[x];
		x++;
	}
	/*copy first n bytes of s2 to str*/
	while (n < ln2 && x < (ln1 + n))
		str[x++] = s2[y++];

	/*copy s2 to str*/
	while (n >= ln2 && x < (ln1 + ln2))
		str[x++] = s2[y++];

	/*add null terminator*/
	str[x] = '\0';

	/*return pointer to concatenated string*/
	return (str);
}
