#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			str[i] = 0;
		return (str);
	}
	else
		return (NULL);
}
