#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][i]);
			j++;
		}
		_putchar('\n');
		i++;
		}
}
