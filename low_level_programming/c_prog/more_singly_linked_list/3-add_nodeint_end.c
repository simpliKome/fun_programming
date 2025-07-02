#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Head pointer
 * @n: integer
 *
 * Return: new
 * otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;

	new->next = temp->next;
	temp->next = new;

	return (new);
}
