#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - this function concatenates two strings.
 * @s1: string 1/2 to concat.
 * @s2: string 2/2 to concat.
 * Return: Pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, z;
	char *ptr;

	x = y = 0;
	if (s1 != NULL)
		for (x = 0; s1[x]; x++)
			;
	if (s2 != NULL)
		for (y = 0; s2[y]; y++)
			;

	ptr = malloc(sizeof(char) * (x + y + 1));
	if (ptr == NULL)
		return (NULL);

	z = 0;
	while (z < (x + y))
	{
		if (z < x)
			ptr[z] = s1[z];
		else
			ptr[z] = s2[z - x];

		z++;
	}
	ptr[z] = 0;


