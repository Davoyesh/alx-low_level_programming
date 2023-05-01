#include "lists.h"

/**
 * find_listint_loop - finds the node where the loop starts in a linked list
 * @head: pointer to the head of the list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare && hare->next)
	{
	hare = hare->next->next;
	tortoise = tortoise->next;

		if (hare == tortoise)
		{
			hare = head;

			while (hare != tortoise)
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}

			return (hare);
		}
	}

	return (NULL);
}
