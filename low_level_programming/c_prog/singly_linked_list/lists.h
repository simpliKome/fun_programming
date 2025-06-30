#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'd string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/*	Function Print All elements in a linked list list_t   */
size_t print_list(const list_t *h);
/*	Function that finds the length of a linked list list_t  */
size_t list_len(const list_t *h);
/* 	Function that adds a new node to the head of a linked list list_t  */
list_t *add_node(list_t **head, const char *str);
/*	Function that adds a new node at the end of a linked list list_t  */
list_t *add_node_end(list_t **head, const char *str);

#endif	/*  LISTS_H	  */
