#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of nodes in a list
 * @h: list passed to the function as parameter
 *
 * Return: returns the number of nodes in the list "h"
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		const dlistint_t *ptr;

		ptr = h;
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
		return (count);
		ptr = NULL;
	}
	return (count);
}
