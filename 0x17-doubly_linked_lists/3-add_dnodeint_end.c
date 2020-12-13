#include "lists.h"
/**
 *add_dnodeint_end - add a node at the begining
 *@n: int
 *@head: head
 *Return: address of new element or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (temp == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
