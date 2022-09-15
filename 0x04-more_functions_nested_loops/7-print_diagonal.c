#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	int line, space, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < n; line++)
		{
			i = line - 1;

			for (space = 0; space <= i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
