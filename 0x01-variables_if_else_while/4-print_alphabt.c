#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints alphabet in lowercase, except for q and e
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
		continue;
		else if (alphabet == 'e')
		continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
