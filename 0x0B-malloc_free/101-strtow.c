#include <stdlib.h>
#include "main.h"

/**
 * count_term - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_term(char *s)
{
	int set, c, h;

	set = 0;
	h = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			set = 0;
		else if (set == 0)
		{
			set = 1;
			h++;
		}
	}

	return (h);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **arr, *tmp;
	int i, j = 0, length = 0, c = 0, term, start, end;

	while (*(str + length))
		length++;
	term = count_term(str);
	if (term == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (term + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				arr[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arr[j] = NULL;

	return (arr);
}
