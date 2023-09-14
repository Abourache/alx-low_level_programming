#include "lists.h"
/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to the list.
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *m;

	while (head != NULL)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
