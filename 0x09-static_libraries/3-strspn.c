#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - This is my function
 * @s: This is the string literal
 * @accept: This is the second string
 *
 * Return: This is the equal string to S
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
