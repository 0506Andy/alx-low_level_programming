#include "main.h"

/**
 * read_textfile -reads a textfile
 * @filename :file to be opened
 * @letters:number of letters it should read and print
 * Return: 0 (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t b_read;
	ssize_t b_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	b_read = read(fd, buf, letters);
	b_write = write(STDOUT_FILENO, buf, b_read);

	close(fd);
	free(buf);

	if (b_read == b_write)
	{
		return (b_write);
	}
	else
	{
		return (0);
	}
}
