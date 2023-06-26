#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int num, n, i;

	num = 0;

	while (str[num] != '\0')
	{
		num++;
	}

	if (num % 2 == 0)
	{
		for (i = num / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (num % 2)
	{
		for (n = (num - 1) / 2; n < num - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
