#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string of the name to print
 * @f: the function to print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
