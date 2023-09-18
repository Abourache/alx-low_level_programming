#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, x, y, num, z, digits;

	i = 0;
	x = 0;
	y = 0;
	num = 0;
	z = 0;
	digits = 0;

	while (s[num] != '\0')
		num++;

	while (i < num && z == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digits = s[i] - '0';
			if (x % 2)
				digits = -digits;
			y = y * 10 + digits;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}

	if (z == 0)
		return (0);

	return (y);
}
