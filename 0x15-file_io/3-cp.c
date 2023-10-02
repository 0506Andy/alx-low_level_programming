#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_error - prints error
 * @message:message to to print
 * Return: void
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * copy_file - copy file
 * @file_one:file to copy from
 * @file_two:file to copy to
 * Return:0 (success)
 */
void copy_file(const char *file_one, const char *file_two)
{
	int fd_one, fd_two;
	ssize_t b_read, b_write;
	char buf[BUFFER_SIZE];

	fd_one = open(file_one, O_RDONLY);
	if (fd_one == -1)
	{
		print_error("Can't read from file");
		exit(98);
	}

	fd_two = open(file_two, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_two == -1)
	{
		print_error("Can't write to file");
		close(fd_one);
		exit(99);
	}

	do
	{
		b_read = read(fd_one, buf, BUFFER_SIZE);
		if (b_read == -1)
		{
			print_error("Can't read from file");
			close(fd_one);
			close(fd_two);
			exit(98);
		}
		b_write = write (fd_two, buf, b_read);
		if (b_write == -1)
		{
			print_error("Can't write to file");
			close(fd_one);
			close(fd_two);
			exit(99);
		}
	}
	while (b_read > 0);

	close(fd_one);
	close(fd_two);
}


/**
 * main - test the print_error
 * @argv:argument vector
 * @argc:argument count
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
