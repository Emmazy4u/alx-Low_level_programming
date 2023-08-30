#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - Node declaration for linked list
 * @str: Input string for each node
 * @len: Input lengthe for the linked list
 * @next: pointer to the next node or null at end of list
 */
struct node
{
	char str;
	int len;
	struct node *next;
};

/**
 * list_t - Typdef for the struct node
 */
typedef struct node list_t;

size_t print_list(const list_t *h);

size_t print_list(const list_t *h);

#endif
