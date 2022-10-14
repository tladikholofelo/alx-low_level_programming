#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: the argument passed
 *
 * Return: If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list add;

	va_start(add, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);

	va_end(add);

	return (sum);
}
