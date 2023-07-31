#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: the first node of the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front_end, *back_end;

	if (front_end == NULL || *head == NULL)
		return (NULL);

	back_end = NULL;

	while ((*head)->next != NULL)
	{
		front_end = (*head)->next;
		(*head)->next = back_end;
		back_end = *head;
		*head = front_end;
	}

	(*head)->next = back_end;

	return (*head);
}