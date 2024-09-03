#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		listint_t *temp = *h;

		while (temp != current && temp != NULL)
			temp = temp->next;

		if (temp == current)
		{
			current->next = NULL;
			break;
		}

		free(current);
		current = next_node;
		count++;
	}

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
		count++;
	}

	*h = NULL;

	return (count);
}
