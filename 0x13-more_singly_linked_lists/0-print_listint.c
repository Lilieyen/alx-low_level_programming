#include "lists.h"

/**
 *print_listint - prints elements of a listint_t list
 *@h: head
 *Return: length of a string
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *p = h;

	while (p != NULL)

	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
