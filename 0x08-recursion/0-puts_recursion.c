#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - fills memory with a constant byte
 * @s: pointer to memory area to fill
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
