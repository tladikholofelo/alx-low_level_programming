#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * If you rename the program, it will print the new name,
 * without having to compile it again.
 * You should not remove the path before the name of the program.
 *
 * Return: 0.
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
