#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int print_alphabet;
	{
		for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
		{
			putchar(print_alphabet);
		}

		putchar('\n');
	}

	return (0);
}
