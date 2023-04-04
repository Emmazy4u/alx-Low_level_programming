#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @pa: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *pa)
{
	size_t numb = 0;

	while (pa)
	{
		numb++;
		pa = pa->next;
	}
	return (numb);
}
