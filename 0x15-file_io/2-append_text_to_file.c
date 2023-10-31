#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int n_letter;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (n_letter = 0; text_content[n_letter]; n_letter++)
			;

		rwr = write(file, text_content, n_letter);

		if (rwr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
