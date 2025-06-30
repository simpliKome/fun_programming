#include "lists.h"

/**
 * list_len - Finds the length of a linked list
 * @h: Pointer to the head of a linked list
 *
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
