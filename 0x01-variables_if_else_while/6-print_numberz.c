#include <stdio.h>

/**
 *main - Entry point
 *Description: 'prints all single digit numbers of base 10 starting from'
 *Return: Always 0 (Succes)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
