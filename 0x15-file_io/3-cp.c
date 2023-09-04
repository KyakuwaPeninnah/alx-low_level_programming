#include "main.h"
#include <stdio.h>
/**
 * error_file - check if a file is opened
 * @file_from: copy from and to check
 * @file_to: destination file
 * @argv: argument vector
 * Return: void
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
 * main - copy content of a file into another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, er_close;
	ssize_t nletters, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nletters = 1024;
	while (nletters == 1024)
	{
		nletters = read(file_from, buff, 1024);
		if (nletters == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buff, nletters);
			if (nwr == -1)
			error_file(0, -1, argv);
	}

	er_close = close(file_from);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	er_close = close(file_to);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
