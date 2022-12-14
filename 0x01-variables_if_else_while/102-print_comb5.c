#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * The numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 *
 * All numbers should be printed with two digits.
 * 1 should be printed as 01
 *
 * The combination of numbers must be separated by comma, followed by a space.
 * The combinations of numbers should be printed in ascending order.
 * 00 01 and 01 00 are considered as the same combination of the numbers,
 * 0 and 1
 *
 * You can only use the putchar function.
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always (0) Success
 */
int main(void)
{

	int p;
	int q;

	for (p = 0; p < 100; p++)
	{
		for (q = p + 1; q < 100; q++)
		{
			putchar(p / 10 + '0');
			putchar(p % 10 + '0');

			putchar(' ');

			putchar(q / 10 + '0');
			putchar(q % 10 + '0');

			if (p == 98 && q == 99)

			if (p == 98 && q == 99)
			{
				break;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
