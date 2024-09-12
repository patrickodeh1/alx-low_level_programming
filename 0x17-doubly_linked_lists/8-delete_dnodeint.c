#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the doubly linked list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	/* Handle the case where the list is empty */
	if (head == NULL || *head == NULL)
		return (-1);

	/* Handle deletion at the beginning of the list */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node to delete */
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	/* If the node is not found (index is out of bounds) */
	if (temp == NULL)
		return (-1);

	/* Update the pointers to remove the node */
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
