#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 * You can only use the putchar function.
 * You can only use putchar three times in your code.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	{
	int num;
	char letter;

	{
	for (num = 0; num < 10 ; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	}
	putchar('\n');
	}

	return (0);
}
