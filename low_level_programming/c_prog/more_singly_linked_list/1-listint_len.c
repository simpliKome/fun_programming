#include "lists.h"

/**
 * listint_len - Return the length of a linked list
 * @h: Head pointer
 *
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	len++;
	h = h->next;

	len += listint_len(h);

	return (len);
}
