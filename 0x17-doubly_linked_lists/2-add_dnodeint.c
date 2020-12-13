#include "lists.h"
/**
 **add_dnodeint - add a node at the begining
 *@n: int
 *@head: head
 *Return: address of new element or null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode || !head)
		return (NULL);
	if (*head != NULL)
		(*head)->prev = newNode;
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}



