#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_m, *last;

	new_m = malloc(sizeof(dlistint_t));

	if (new_m == NULL)
		return (NULL);

	new_m->n = n;
	new_m->next = NULL;
	new_m->prev = NULL;
	if (*head == NULL)
	{
		*head = new_m;
		return (new_m);
	}
	last = *head;

	while (last->next != NULL)
		last = last->next;
	last->next = new_m;
	new_m->prev = last;

	return (new_m);
}
