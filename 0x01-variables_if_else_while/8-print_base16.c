#include <stdio.h>

/**
 *main - Entry poit
 *Description: 'Prints all the numbers of base 16 in lowercase'
 *Return: Always 0 (Succes)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
