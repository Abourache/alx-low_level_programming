#include <stdio.h>

/**
 * main - Entry point
 *Description: 'Prints the lowercase alphabet in revers'
 * Return: Always 0 (Suacces)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
