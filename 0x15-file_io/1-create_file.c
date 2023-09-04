#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: content to be copied
 * Return: 1 if suceesful or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nchars;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nchars = 0; text_content[nchars]; nchars++)
		;
	rwr = write(fd, text_content, nchars);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
	}
