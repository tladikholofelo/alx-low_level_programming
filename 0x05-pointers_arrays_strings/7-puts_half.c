#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	j++;

	for (j /= 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
