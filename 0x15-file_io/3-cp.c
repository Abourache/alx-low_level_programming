#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int file_start, file_end;
int n1 = 1024, n2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_start file_to\n"), exit(97);
file_start = open(argv[1], O_RDONLY);
if (file_start == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
file_end = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (file_end == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_start), exit(99);
}
while (n1 == 1024)
{
	n1 = read(file_start, buf, 1024);
	if (n1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	n2 = write(file_end, buf, n1);
	if (n2 < n1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file_start) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_start), exit(100);

if (close(file_end) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_end), exit(100);

return (0);
}
