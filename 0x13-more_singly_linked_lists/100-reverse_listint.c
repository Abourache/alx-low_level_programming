#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 * Return: the first node of the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front_end = NULL;
	listint_t *back_end = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		front_end = (*head)->next;
		(*head)->next = back_end;
		back_end = *head;
		*head = front_end;
	}
	*head = back_end;
	return (*head);
}