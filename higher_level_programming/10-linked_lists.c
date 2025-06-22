#include <stdio.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listiint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n;		/* number of node */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		next++;
	}

	return (n);
}

/**
 * add_nodeint - adds a node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in the node
 * Return: addres of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
