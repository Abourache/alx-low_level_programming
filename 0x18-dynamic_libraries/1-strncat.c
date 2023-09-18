#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengD, lengS;

	lengD = 0;
	lengS = 0;

	while (*(dest + lengD) != '\0')
		lengD++;

	while (*(src + lengS) != '\0' && lengD < 97 && lengS < n)
	{
		*(dest + lengD) = *(src + lengS);
		lengD++;
		lengS++;
	}
	*(dest + lengD) = '\0';
	return (dest);
}
