#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Numbers must be separated by comma, followed by a space.
 * The two digits must be different.
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use the putchar function.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int d;

	for (d = 0; d < 100; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');

		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
