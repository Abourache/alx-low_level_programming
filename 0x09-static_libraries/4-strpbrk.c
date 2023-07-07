#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - This is my function
 * @s: This is my entry
 * @accept: This is my second entry
 * Return: This is my return
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				return (&s[x]);
			}
		}
	}
	return (NULL);
}
