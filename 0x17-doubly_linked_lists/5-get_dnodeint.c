#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node, starting from 0
 *
 * Return: The nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/* Traverse the list to find the nth node */
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	/* If node at the index doesn't exist, return NULL */
	return (NULL);
}
