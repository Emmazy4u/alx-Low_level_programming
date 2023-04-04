#include "lists.h"

/**
 * add_nodeint - will add a new node at the beginning of a linked list
 * @head: Is a pointer to the first node in the list
 * @nm: is  data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int nm)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->nm = nm;
	new->next = *head;
	*head = new;
	return (new);
}
