#include "main.h"

/**
 * swap_int - swap the value of the variable
 * @b: pointer to second value
 * @a: pointer to first value
 * @&: the adress of variable to update
 *
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
