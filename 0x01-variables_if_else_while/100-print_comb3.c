#include <stdio.h>
/**
 * main - Entry point
 *Description: 'Prints the numbers from 00 to 99, numbers separated'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int i;

	for (n = 0 ; n < 9 ; n++)
	{
		i = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}

