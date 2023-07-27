#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - prints all the elements of a list
  * @h:pointer to the list
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}