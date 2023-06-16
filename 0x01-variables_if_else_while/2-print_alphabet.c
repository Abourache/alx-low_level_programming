#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Write a program that prints the alphabet in lowercase'
 *Return: 0 (Succes)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
