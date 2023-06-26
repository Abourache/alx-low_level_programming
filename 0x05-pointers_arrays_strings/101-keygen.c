#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int passw[100];
	int i, sum, j;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passw[i] = rand() % 78;
		sum += (passw[i] + '0');
		putchar(passw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}
