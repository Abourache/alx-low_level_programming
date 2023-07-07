#include "main.h"
/**
 *_strcat - This is the main copy
 *@dest: This is my dest
 *@src: This is my source
 * Return: This return to the result
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	dest[i] = src[j];
	i++;
	}
	return (dest);
}
