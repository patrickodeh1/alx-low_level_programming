#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *nodes[1024];
	size_t i;

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (nodes[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		nodes[count] = current;
		count++;
		current = current->next;
	}

	return (count);
}
