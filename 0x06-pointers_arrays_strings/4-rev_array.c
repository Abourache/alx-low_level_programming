#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int swap, start, end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		swap = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = swap;
		start++;
		end--;
	}
}
