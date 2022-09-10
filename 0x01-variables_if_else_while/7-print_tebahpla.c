#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints the lowercase alphabet in reverse.
 * You can only use the putchar function.
 * You can only use putchar twice in your code.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
