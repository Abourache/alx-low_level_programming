#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - This is my function copy the number the character to S
 * @s: This is my entry and return
 * @b: This is the character to copy
 * @n: This is the number of Bytes
 *
 * Return: This is my result and Return S
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
