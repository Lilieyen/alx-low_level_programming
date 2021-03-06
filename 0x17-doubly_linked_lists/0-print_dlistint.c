#include "lists.h"
/**
 *print_dlistint - print  all elements of a dlistint_t
 *@h: head of list
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}

