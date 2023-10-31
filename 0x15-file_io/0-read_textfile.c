#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters:  number of letters to be printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n_read, n_write;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	n_read = read(file, buffer, letters);
	n_write = write(STDOUT_FILENO, buffer, n_read);

	close(file);

	free(buffer);

	return (n_write);
}
