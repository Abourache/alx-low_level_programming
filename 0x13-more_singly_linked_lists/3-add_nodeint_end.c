#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *end = *head;

	new_n = malloc(sizeof(listint_t));
	if (new_n != NULL)
	{
		new_n->n = n;
		new_n->next = NULL;
	}
	else
		return (NULL);
	if (end != NULL)
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new_n;
	}
	else
		*head = new_n;
	return (new_n);
}