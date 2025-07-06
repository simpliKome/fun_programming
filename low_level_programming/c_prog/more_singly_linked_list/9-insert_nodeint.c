#include "lists.h"

/**
 * insert_nodeint_at_index - Adds node at nth index in a listint_t list
 * @head: double-pointer to head node
 * @idx: index to add node
 * @n: integer to insert at newnode
 *
 * Return: new
 * Otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i = 0;
	size_t len;

	len = listint_len(temp);
	if (idx >= len)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (temp == NULL || idx == 0)
	{
		new->next = temp;
		temp = new;
		return (new);
	}

	while (temp != NULL)
	{
		i++;
		if (i == idx)
		{
			new->next = temp->next;
			temp->next = new;
			break;
		}
		temp = temp->next;
	}

	return (new);
}
