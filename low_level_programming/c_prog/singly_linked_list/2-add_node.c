#include "lists.h"

/**
 * add_node - Adds a new node to the head of the linked list
 * @head: Pointer to the head of the linked list
 * @str: String Pointer
 *
 * Return: new
 * otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	*head = new;

	return (new);
}
