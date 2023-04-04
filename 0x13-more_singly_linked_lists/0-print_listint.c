#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @pa: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *pa)
{
	size_t numb = 0;

	while (z)
	{
		printf("%d\n", pa->n);
		numb++;
		pa = pa->next;
	}
	return (numb);
}
