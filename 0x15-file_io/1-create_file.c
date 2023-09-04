#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 *
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the string to be written to the file.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int am, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	am = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(am, text_content, len);

	if (am == -1 || x == -1)
		return (-1);

	close(am);
	return (1);
}
