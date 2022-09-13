#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase.
 *
 * Return: Always (0) Success
 */
void print_alphabet(void)
{
	char print_alphabet;
	{
		for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
		{
			putchar(print_alphabet);
		}

		putchar('\n')
	}
	return (0);
}
