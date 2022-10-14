#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * prints_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of arguments passed to the function
 *
 * Return: If separator is NULL, don't print it.
 * If one of the string is NULL, print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
