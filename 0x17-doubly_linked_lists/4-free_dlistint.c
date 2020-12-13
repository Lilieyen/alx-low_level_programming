#include "lists.h"
/**
 *free_dlistint - free a dlistint
 *@head: head
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
