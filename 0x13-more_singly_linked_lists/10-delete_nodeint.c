#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * of a listint_t linked list
 * @head: Pointer to the pointer to the first node of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	prev = *head;
	curr = prev->next;

	for (i = 1; i < index && curr != NULL; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}
