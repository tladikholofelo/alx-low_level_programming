#include "main.h"

/**
 * error_file - checks if a file can be opened
 * @file_from: file origin
 * @file_to: file destination
 * @argv: arguments vector
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_file;
	ssize_t n, file_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, buffer, 1024);
		if (n == -1)
			error_file(-1, 0, argv);
		file_write = write(file_to, buffer, n)
			if (file_write == -1)
				error_file(0, -1, argv);
	}

	close_file = close(file_from);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_file = close(file_to);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
