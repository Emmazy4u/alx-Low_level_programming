#include "lists.h"

/**
 * print_dlistint - function that prints all elemets of a list
 * @h: list passed to the function as parameter
 *
 * Return: returns the number of nodes in the list "h"
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		const dlistint_t *ptr;

		ptr = h;
		while (ptr != NULL)
		{
			count++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
		return (count);
	}
	return (count);
}
