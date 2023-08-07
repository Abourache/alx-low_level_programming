#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the data to append to filename
 *
 * Return: Upon success, return 1. Otherwise, return -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, WA;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	WA = open(filename, O_WRONLY | O_APPEND);

	if (WA == -1)
		return (-1);

	write(WA, text_content, i);

	return (1);
}
