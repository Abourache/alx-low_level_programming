#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int lengD, lengS;

	lengD = 0;
	lengS = 0;

	while (*(dest + lengD) != '\0')
		lengD++;

	while (*(src + lengS) != '\0' && lengD < 97)
	{
		*(dest + lengD) = *(src + lengS);
		lengD++;
		lengS++;
	}
	*(dest + lengD) = '\0';
	return (dest);
}
