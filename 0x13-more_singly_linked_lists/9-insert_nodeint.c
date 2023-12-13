#include "lists.h"

/**
 * *insert_nodeint_at_index - Write a function that inserts a new
 * node at a given position.
 *
 * @head: the head
 * @n: integer
 * @idx: the index of the list where the new node should be added
 *
 * Return: the address of the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *src, *temp;
	unsigned int cout = 0;

	src = malloc(sizeof(listint_t));

	if (src == NULL)
		return (NULL);

	src->n = n;

	temp = *head;

	if (idx == 0)
	{
		src->next = *head;
		*head = src;
	}
	else
	{
		while (temp != NULL && cout < idx - 1)
		{
			temp = temp->next;
			cout++;
		}
		if (temp != NULL)
		{
			src->next = temp->next;
			temp->next = src;
		}
		else
		{
			return (NULL);
		}
	}
	return (src);

}
