#include "lists.h"

/**
 * print_listint - will print the elements of a linked list
 * @pa: the linked list of type listint_t to print
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *pa)
{
	size_t anumb = 0;

	while (pa)
	{
		printf("%d\n", pa->n);
		anumb++;
		pa = pa->next;
	}
	return (anumb);
}
