#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
