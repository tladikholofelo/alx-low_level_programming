#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0.
 * You are not allowed to use any variable of type char.
 * You can only use the putchar function. (printf, puts are forbidden)
 * You can only use putchar twice in your code.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
