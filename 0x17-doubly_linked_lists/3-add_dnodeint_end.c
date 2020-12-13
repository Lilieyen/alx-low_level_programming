#include "lists.h"

/**
 **add_dnodeint_end - add node at the end
 *@head: head
 *@n: int
 *Return: null if failed or address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
