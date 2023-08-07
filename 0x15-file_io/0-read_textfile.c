#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 *
 * Return: If filename is NULL, the file cannot be opened or read, or
 * write fails or returns an unexpected number of bytes, return 0.
 * Otherwise, return the actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, Read, Write;
	char *m;

	m = malloc(letters);
	if (m == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(m);
		return (0);
	}

	Read = read(file, m, letters);

	Write = write(STDOUT_FILENO, m, Read);

	close(file);

	return (Write);
}
