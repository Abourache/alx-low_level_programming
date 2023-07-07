#include "main.h"

/**
 * _strncat - THis is the main
 * @dest: This is the dest
 * @src: This is the src
 * @n: Thi is n
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
