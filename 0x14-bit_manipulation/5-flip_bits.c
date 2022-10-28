#include "main.h"

/**
 * flip_bits -  returns the number of bits needed to flip
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}

	return (i);
}
