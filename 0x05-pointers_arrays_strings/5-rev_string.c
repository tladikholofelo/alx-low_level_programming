#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i = 0, len, n;

	while (s[i] != '\0')
		i++;
	len = i;

	for (i = 0; i <= len / 2 - 1; i++)
	{
		n = s[i];
		s[i] = s[len - 1 - i];
		s[len - i - 1] = n;
	}
}
