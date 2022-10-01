#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Your program should print the result of the multiplication,
 * followed by a new line.
 * You can assume that the two numbers and result of the multiplication
 * can be stored in an integer.
 *
 * Return: If the program does not receive two arguments, print Error,
 * followed by a new line, and return 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
