#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.i
 * Numbers must be separated by comma, followed by a space.
 * Numbers should be printed in ascending order.
 * You can only use the putchar function.
 * You can only use putchar four times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

	return (0);
}
