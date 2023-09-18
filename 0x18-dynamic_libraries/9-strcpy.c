#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: pointer to the buffer in which we copy the string
 *
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int num, i;

	num = 0;

	while (src[num] != '\0')
	{
		num++;
	}

	for (i = 0; i < num; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
