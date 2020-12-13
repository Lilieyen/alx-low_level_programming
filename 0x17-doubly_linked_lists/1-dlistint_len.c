#include "lists.h"
/**
 *dlistint_len - print length of dlistint_t
 *@h: head
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
