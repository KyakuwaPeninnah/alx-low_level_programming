#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append content to
 * @text_content: content to append to a file
 * Return: 1 on success and -1 if it is not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nchars;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (nchars = 0; text_content[nchars]; nchars++)
			;
		rwr = write(fd, text_content, nchars);
		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
