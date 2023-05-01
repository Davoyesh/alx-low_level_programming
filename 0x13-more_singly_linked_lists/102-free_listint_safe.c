#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Double pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
		{
			*h = NULL;
			printf("-> [%p] %d\n", (void *) current, current->n);
			return (count);
		}
		current = next;
	}

	*h = NULL;
	return (count);
}
