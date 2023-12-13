#include "lists.h"

/**
 * *reverse_listint - Write a function that reverses a listint_t linked list.
 *
 * @head: the head
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *node1, *node2;

	node1 = NULL;
	node2 = *head;

	if (*head == NULL)
		return (NULL);

	while (node2 != NULL)
	{
		temp = node2->next;
		node2->next = node1;
		node1 = node2;
		node2 = temp;
	}
	*head = node1;

	return (*head);
}
