#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: the memory area destination
 * @src: the memory area source
 * @n: number of bytes to be copied
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
