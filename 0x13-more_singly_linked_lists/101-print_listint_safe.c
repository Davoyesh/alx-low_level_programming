#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *prev = NULL;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current < prev)
			break;
		prev = current;
		current = current->next;
	}

	if (current != NULL)
		printf("-> [%p] %d\n", (void *)current, current->n);

	return (count);
}
