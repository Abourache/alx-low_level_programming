#include "main.h"
/**
 * _memset - This is my function copy the number the character to S
 * @s: This is my entry and return
 * @b: This is the character to copy
 * @n: This is the number of Bytes
 * Return: This is my result and Return S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
