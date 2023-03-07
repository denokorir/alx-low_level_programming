#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (int x = 0; x < 8; x++)
	{
		for (int y; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
