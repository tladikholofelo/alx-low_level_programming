#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: 0.
 */

int main(void)
{
	int pass;
	char ch;

	srand(time(NULL));
	while (pass <= 2645)
	{
		ch = rand() % 128;
		pass += ch;
		putchar(ch);
	}
	putchar(2772 - pass);

	return (0);
}
