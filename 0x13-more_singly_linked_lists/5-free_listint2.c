#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new_n;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			new_n = *head;
			free(new_n);
			*head = (*head)->next;
		}

		*tmp = NULL;
	}
}