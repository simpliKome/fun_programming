#include "lists.h"

/**
 * add_node_end - Add node at the end of a linked list structure
 * @head: Pointer to the head linked list
 * @str: String pointer
 *
 * Return: new
 * otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}

	while (*head != NULL)
	{
		*head = *head->next;
		if (*head == NULL)
		{
			new->next = *head;
			*head = new;
		}
	}

	return (new);
}
