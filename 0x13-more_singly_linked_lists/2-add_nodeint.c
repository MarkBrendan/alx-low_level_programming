#include "lists.h"

/**
 * *add_nodeint - Write a function that adds a new node
 * at the beginning of a listint_t list.
 *
 * @head: the head
 * @n: integer
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *src1;

	src1 = malloc(sizeof(listint_t));

	if (src1 == NULL)
		return (NULL);

	src1->n = n;

	src1->next = *head;

	*head = src1;

	return (src1);

}
