#include "lists.h"
#include <stdlib.h>
/**
 * add_node - add new nodes to the list
 *@head: current place in the list
 *@str: string to add to the head
 * Return: returns the address to the new element or NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *next;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	next = strdup(str);
	if (next == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = next;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}