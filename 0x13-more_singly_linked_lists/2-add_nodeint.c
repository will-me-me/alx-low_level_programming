#include "lists.h"

/**
 * add_nodeint - adds new node in the beginning of a linked list
 * @head:pointer that points to first node in the linked list
 * @n:new data that is inserted when node is created
 *
 * Return: pointer to new element(SUCCESS)
 * return NULL(FAIL)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizezof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
