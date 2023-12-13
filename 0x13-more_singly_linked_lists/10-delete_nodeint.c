#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: the head
 * @index: index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node1, *node2;
	unsigned int i;

	node1 = *head;
	node2 = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; node1 != NULL && i < index; i++)
	{
		node2 = node1;
		node1 = node1->next;
	}

	if (node1 == NULL)
		return (-1);

	node2->next = node1->next;
	free(node1);

	return (1);
}
