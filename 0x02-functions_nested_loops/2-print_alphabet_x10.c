#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	int k;
	int j = 0;

	while (j < 10)
	{
		j++;

		for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
	}
}
