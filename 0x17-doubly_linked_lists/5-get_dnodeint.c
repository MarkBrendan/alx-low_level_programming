#include "lists.h"

/**
 * *get_dnodeint_at_index - Write a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: the head of the list
 * @index: at the index to put the nth node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *inedx;
	unsigned int cont = 0;

	inedx = head;

	while (inedx != NULL)
	{
		if (cont == index)
		{
			return (inedx);
		}
		else
		{
			cont++;
		}
		inedx = inedx->next;
	}
	return (NULL);
}
