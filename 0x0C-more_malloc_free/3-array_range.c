#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *array;
	int s;

	if (min > max)
		return (NULL);
	s = max - min;

	array = malloc(sizeof(int) * (s + 1));
	if (!array)
		return (NULL);
	while (max > min)
	{
		array[s] = max;
		s--;
		max--;
	}
	array[s] = min;
	return (array);
}
