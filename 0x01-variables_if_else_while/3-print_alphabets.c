#include <stdio.h>
/**
 *main - Entry point
 *Description: 'alphabet in lowercase, and then in uppercase'
 *Return: 0 (Succes)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
