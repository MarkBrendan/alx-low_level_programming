#include "lists.h"

/**
 * *get_nodeint_at_index - Write a function that returns the nth node of a
 * listint_t linked list.
 *
 * @head: the head
 * @index: is the index of the node, starting at 0
 *
 * Return: returns the head node’s data (n).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i == index)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}

}
