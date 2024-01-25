#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list
 * @head: the head of the list
 *
 * Return: free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node, *next_node;

	free_node = head;

	while (free_node != NULL)
	{
		next_node = free_node->next;
		free(free_node);
		free_node = next_node;
	}
}
