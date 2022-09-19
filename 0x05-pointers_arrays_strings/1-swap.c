#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to an integer to be swapped
 * @b: a pointer to an integer to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
