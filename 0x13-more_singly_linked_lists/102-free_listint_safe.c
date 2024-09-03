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
	listint_t *current;
	listint_t *temp;
	listint_t *nodes[1024];
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (nodes[i] == current)
			{
				*h = NULL;
				return (count);
			}
		}

		nodes[count] = current;
		count++;
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;

	return (count);
}
