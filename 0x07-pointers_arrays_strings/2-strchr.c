#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be checked
 * @c: first occurance of the charcater
 *
 * Return: the pointer to s, or NULL if characer not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
