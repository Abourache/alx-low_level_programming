#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *s)
{
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int X = 0;
	int Y;

	while (*(s + X) != '\0')
	{
		for (Y = 0; Y <= 51; Y++)
		{
			if (*(s + X) == A[Y])
			{
				*(s + X) = rot[Y];
				break;
			}
		}
		X++;
	}
	return (s);
}
