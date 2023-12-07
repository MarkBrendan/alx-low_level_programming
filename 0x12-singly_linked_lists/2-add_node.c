#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - Write a function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: pointer to the first linked list
 * @str: the string to be print
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node->str);
		return (NULL);
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);


}
