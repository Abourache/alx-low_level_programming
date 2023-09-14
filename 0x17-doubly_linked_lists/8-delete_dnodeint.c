#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1, *res_m = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = res_m->next;
		if (res_m->next == NULL)
			return (-1);
		res_m->next->prev = NULL;
		free(res_m);
		return (1);
	}

	while (count < index)
	{
		if (res_m->next == NULL)
			return (-1);
		res_m = res_m->next;
		count++;
	}
	res_m->prev->next = res_m->next;
	if (res_m->next)
		res_m->next->prev = res_m->prev;
	if (res_m->next == NULL)
	{
		p1 = res_m->prev;
		p1->next = NULL;
		free(res_m);
		return (1);
	}
	free(res_m);
	return (1);
}
