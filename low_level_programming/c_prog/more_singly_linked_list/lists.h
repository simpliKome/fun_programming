#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/*	Function That prints all elements in a linked lists  */
size_t print_listint(const listint_t *h);

/*	Function that returns the length of a linked list  */
size_t listint_len(const listint_t *h);

/*	Function that adds a new node at the beginning of a linked list listint  */
listint_t *add_nodeint(listint_t **head, const int n);

/*	Function that adds a new node at the end of a linked list listint  */
listint_t *add_nodeint_end(listint_t **head, const int n);

/*	Function that frees a listint_t list  */
void free_listint(listint_t *head);

/*	Function that frees a listint_t lists and points head to NULL  */
void free_listint2(listint_t **head);

/*	Function that deletes the head of a linked list node  */
int pop_listint(listint_t **head);

#endif	/*  LISTS_H  */
