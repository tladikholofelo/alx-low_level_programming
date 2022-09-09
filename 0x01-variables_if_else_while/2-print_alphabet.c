#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lower case
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
