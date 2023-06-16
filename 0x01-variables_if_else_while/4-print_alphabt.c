#include <stdio.h>
/**
 *main - Entry point
 *Description:  'alphabet in lowercase'
 *Return: 0 (Succes)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}

	putchar('\n');

	return (0);
}
