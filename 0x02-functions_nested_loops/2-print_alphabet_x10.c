#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: the result.
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char abc = 'a';

		while (j <= 'z')
	{
		_putchar(abc);

		abc++;
	}
	}

	_putchar('\n');

	j++;
}
