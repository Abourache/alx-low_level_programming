#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * list_len - finds the number of elements in a linked list
  * @h: pointer to the list
  * Return: the number of elements
  */
size_t list_len(const list_t *h)
{
	int a;

	for (a = 0; h; a++)
		h = h->next;
	return (a);
}