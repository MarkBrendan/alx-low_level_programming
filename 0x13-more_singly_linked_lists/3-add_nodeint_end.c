#include "lists.h"

/**
 * *add_nodeint_end - Write a function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: the head
 * @n: integer
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *src, *temp;

	src = malloc(sizeof(listint_t));

	if (src == NULL)
		return (NULL);

	src->n = n;

	temp = *head;

	if (*head == NULL)
	{
		*head = src;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = src;
	}
	/*src->next = NULL;*/
	return (src);

}
