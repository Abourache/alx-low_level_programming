#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - this function  concatenates all the arguments of your program.
 * @ac: args count.
 * @av: arguments
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *temp;
	int length, b, i;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (b = 0; temp[b]; b++)
		{
			length++;
		}
		length += 1;
	}
	ptr = malloc(sizeof(char) * length + 1);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (b = 0; temp[b]; ++b)
		{
			ptr[length] = temp[b];
			length++;
		}
			ptr[length] = '\n';
			length++;
	}
	ptr[length] = '\0';
	return (ptr);
}
