#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_list - Frees a list
  * @head: A pointer to the list head
  */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}