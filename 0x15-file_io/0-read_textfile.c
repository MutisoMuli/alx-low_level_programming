#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to standard output.
 *
 * @filename: Name of the file to be read.
 * @letters: Number of letters to read.
 *
 * Return: Actual bytes read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t dl;
	ssize_t x;
	ssize_t a;

	dl = open(filename, O_RDONLY);
	if (dl == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(dl, buf, letters);
	x = write(STDOUT_FILENO, buf, a);

	free(buf);
	close(dl);
	return (x);
}
