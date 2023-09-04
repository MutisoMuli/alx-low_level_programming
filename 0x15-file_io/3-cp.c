#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates a 1024-byte buffer for file data storage.
 *
 * @file: The name of the file for which the buffer is created.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 *
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies contents from one file to another.
 *
 * @argc: Number of program arguments.
 * @argv: Array of argument pointers.
 *
 * Return: 0 on success.
 *
 * Description:
 * - Exit code 97 for incorrect argument count.
 * - Exit code 98 if file_from doesn't exist or can't be read.
 * - Exit code 99 if file_to can't be created or written to.
 * - Exit code 100 if file_to or file_from can't be closed.
 */
int main(int argc, char *argv[])
{
	int from, to, a, b;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		b = write(to, buffer, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		a = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
