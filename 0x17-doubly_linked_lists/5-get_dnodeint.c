#include "lists.h"
/**
 *get_dnodeint_at_index - get node at nth index
 *@head: head
 *@index: index
 *Return: that node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}

