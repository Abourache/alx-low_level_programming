#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 *
 * Return: Pointer to string in memory.
 */
char *_strdup(char *str)
{
	int i;
	char *a;

	if (str == 0)
		return (0);
	for (i = 0; str[i]; i++)
		;
	a = malloc(sizeof(char) * (i + 1));
	if (a == 0)
		return (0);
	a[i] = '\0';
	while (i--)
	{
		a[i] = str[i];
	}
	return (a);
}
