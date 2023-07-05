#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - Returns Length of String
 * Return: On success length.
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
