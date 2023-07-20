#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *com = ", ";
	char *p;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			com = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), com);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), com);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), com);
			break;
		case 's':
			p = va_arg(valist, char *);
			if (p == NULL)
				p = "(nil)";
			printf("%s%s", p, com);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
