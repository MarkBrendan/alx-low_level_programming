#include "lists.h"

/**
 * sum_listint - Write a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 *
 * @head: the head
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;

	}

	return (sum);
}
