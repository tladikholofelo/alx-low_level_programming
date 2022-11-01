#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the file name
 * @letters: the number of letters it should read and print
 *
 * Description: If the file cannot be opened or read, return 0.
 * If filename = NULL, return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n_read, n_wrote;
	char *buffer;

	/* Check if file exists = (!filename) */
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	n_read = read(file, buffer, letters);
	n_wrote = write(STDOUT_FILENO, buffer, n_read);

	close(file);
	free(buffer);

	return (n_wrote);
}
