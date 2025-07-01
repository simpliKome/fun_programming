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
	list_t *temp = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	if (temp == NULL)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	new->next = temp->next;
	temp->next = new;

	return (new);
}
