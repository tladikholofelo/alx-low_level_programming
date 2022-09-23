#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer to be printed
 * @size: the number of bytes to be printed from the buffer
 *
 * The output should print 10 bytes per line
 * Each line starts with the position of the first byte of the line in
 * hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at
 * a time, separated by a space
 * Each line shows the content of the buffer. If the byte is a printable
 * character, print the letter. If not,, print "."
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 */
void print_buffer(char *b, int size)
{
	int i, k;

	for (i = 0; i < size; i += 10)
	{
			printf("%08x: ", i);
			for (k = 0; k < 10; k++)
			{
				if ((k + i) >= size)
					printf(" ");
				else
					printf("%02x", *(b + k + i));

				if ((k % 2) != 0 && k != 0)
					printf(" ");
			}
			for (k = 0; k < 10; k++)
			{
				if ((k + i) >= size)
					break;
				else if (*(b + k + i) >= 31 && *(b + k + i) <= 126)
					printf("%c", *(b + k + i));
				else
					printf(".");
			}
			if (i >= size)
				continue;
			printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
