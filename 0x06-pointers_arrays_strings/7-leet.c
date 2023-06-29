#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	char A[] = "aeotlAEOTL";
	char N[] = "4307143071";
	int x = 0;
	int y;

	while (*(s + x) != '\0')
	{
		for (y = 0; y <= 9; y++)
		{
			if (*(s + x) == A[y])
			{
				*(s + x) = N[y];
			}
		}
		x++;
	}
	return (s);
}
