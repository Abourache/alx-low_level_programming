#include "main.h"
/**
 * _strncpy - This is my main
 * @dest: This is my dest
 * @src: This is my source
 * @n: This is my N
 *
 *Return: THis is my return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
	dest[i] = src[i];
	}
	for (; i  < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
