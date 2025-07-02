#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: len
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
