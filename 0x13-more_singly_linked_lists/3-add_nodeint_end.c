#include "lists.h"

/**
 **add_nodeint_end - adds a node at the beginning
 *@head: head
 *@n: int
 *Return: null or address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
