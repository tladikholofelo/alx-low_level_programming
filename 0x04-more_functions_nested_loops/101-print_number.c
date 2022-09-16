#include "main.h"

/**
 * print_number - prints and integer
 * @n: integer to be printed
 *
 * Not allowed to use long.
 * No arrays or pointers.
 * No hard-code special values.
 */

void print_number(int n)
{
	unsigned int k;

	k = n;
	if (n < 0)
	{
		_putchar(45);
		k = -k;
	}

	if ((k / 10) >  0)
		print_number(k / 10);
	_putchar((k % 10) + '0');
}
