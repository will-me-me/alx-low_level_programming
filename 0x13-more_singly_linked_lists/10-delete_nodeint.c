#include "lists.h"

/**
 * delete_nodeint_at_index - deletes  node at  index
 * @head: pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 (Success)
 *        -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		i++;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);

	return (1);
}
