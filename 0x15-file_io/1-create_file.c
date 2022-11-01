#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 * If the file already exists, truncate it.
 * If filename is NULL return -1.
 * If text_content is NULL create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int file, file_write, alpha;

	if (!filename)
		return (-1);

	/* if the file already exists, truncate it */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (alpha = 0; text_content[alpha]; alpha++)
		;

	file_write =  write(file, text_content, alpha);

	if (file_write == -1)
	return (-1);

	close(file);
	return (1);
}
