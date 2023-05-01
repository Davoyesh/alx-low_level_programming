#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position in a listint_t list.
 * @head: A pointer to a pointer to the
 * head node of the linked list.
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node,
 * or NULL if it failed to add the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	current = *head;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (i != idx - 1)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
