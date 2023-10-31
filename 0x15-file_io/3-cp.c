#include "main.h"
#include <stdio.h>

/**
 * error_check - checks if files can be opened.
 * @from_file: from_file.
 * @to_file: to_file.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_check(int from_file, int to_file, char *argv[])
{
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, close_error;
	ssize_t n_chars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp from_file to_file");
		exit(97);
	}

	from_file = open(argv[1], O_RDONLY);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_check(from_file, to_file, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(from_file, buffer, 1024);
		if (n_chars == -1)
			error_check(-1, 0, argv);
		nwr = write(to_file, buffer, n_chars);
		if (nwr == -1)
			error_check(0, -1, argv);
	}

	close_error = close(from_file);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}

	close_error = close(to_file);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	return (0);
}
