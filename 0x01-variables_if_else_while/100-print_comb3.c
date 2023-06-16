#include <stdio.h>
/**
 * main - Entry point
 *Description: 'Prints the numbers from 00 to 99, numbers separated'
 * Return: Always 0
 */
int main(void)
{
	int dg1, dg2;

	for (dg1 = 0; dg1 < 10; dg1++)
	{
		for (dg2 = 0; dg2 < 10; dg2++)
		{
			putchar((dg1 % 10) + '0');
			putchar((dg2 % 10) + '0');

			if (dg1 == 9 && dg2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
