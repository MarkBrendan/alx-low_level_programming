#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head
 * node of a listint_t linked list, and returns the head node’s data (n).
 *
 * @head: the head
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *src;
	int retunint;

	if (*head == NULL)
	{
		return (0);
	}

	retunint = (*head)->n;
	src = (*head)->next;

	free(*head);
	*head = src;

	return (retunint);

}
