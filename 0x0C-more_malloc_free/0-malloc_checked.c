#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: argument
 *
 * Return: pointer to the allocated memory.
 * If malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
