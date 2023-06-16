#include <stdio.h>
/**
 *main - Entry point
 *Description:  'Prints all single digit numbers '
 *Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
