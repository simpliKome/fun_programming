#include "lists.h"

/**
 * add_nodeint - Adds a new node at the start of a linked list
 * @head: Head pointer
 * @n: integer
 *
 * Return: new
 * Otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
