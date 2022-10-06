#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: maximum number of bytes
 *
 * Return: pointer in memoery containing s1, followed by n bytes of s2.
 * Upon failure return NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = n, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size = 0; s1[size]; size++)
		i++;

	concat = malloc(sizeof(char) * (i + 1));

	if (concat == NULL)
		return (NULL);

	i = 0;

	for (size = 0; s1[size]; size++)
		concat[i++] = s1[size];

	for (size = 0; s2[size] && size < n; size++)
		concat[i++] = s2[size];

	concat[i] = '\0';

	return (concat);
}
