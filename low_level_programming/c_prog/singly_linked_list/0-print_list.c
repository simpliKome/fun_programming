#include "lists.h"

/**
 * print_list - Prints all elements in a linked list
 * @h: Pointer to head of the linked list
 *
 * Return: num
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			sum++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		sum++;
	}

	return (sum);
}
