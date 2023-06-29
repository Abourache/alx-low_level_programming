#include "main.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int a, d, num;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	d = a;
	num = 1;

	while (d > 9)
	{
		d /= 10;
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((a / num) % 10) + 48);
	}
}
