#include "lists.h"

/**
 * get_nodeint_at_index - Fetch the node at nth index
 * @head: head pointer
 * @index: integer
 *
 * Return: node
 * Otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	size_t len = listint_len(head);
	listint_t *node = head;

	if (len == 0)
		return (NULL);

	if (index >= len)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i == index)
			break;

		node = node->next;
	}

	return (node);
}
