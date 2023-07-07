#include "main.h"
/**
 * _strspn - This is my function
 * @s: This is the string literal
 * @accept: This is the second string
 *
 * Return: This is the equal string to S
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, z;

	z = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				z++;
				break;
			}
		}
		if (accept[y] != s[x])
		{
		break;
		}
	}
	return (z);
}
