#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file to create
 * @text_content: the data to write to filename
 *
 * Return: Upon success, return 1. Otherwise, return -1.
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, CWT;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	CWT = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (CWT == -1)
		return (-1);

	write(CWT, text_content, i);

	return (1);
}
