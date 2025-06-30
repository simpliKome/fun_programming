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


#endif	/*  LISTS_H	  */
