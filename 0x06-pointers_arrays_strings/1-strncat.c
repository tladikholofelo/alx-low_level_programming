#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the string to evaluate
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: the pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
