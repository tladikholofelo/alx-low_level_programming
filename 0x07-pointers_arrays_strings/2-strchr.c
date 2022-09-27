#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be checked
 * @c: first occurance of the charcater
 *
 * Return: the pointer to s, or NULL if characer not found
 */
char *_strchr(char *s, char *c)
{
	int a = 0, b;

	while (s[a])
		a++;

	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
