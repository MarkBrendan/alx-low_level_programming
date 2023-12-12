#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list
 *
 * @head: the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

}
