#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a list
 * @head: address of pointer that points to list
 * @n: number to be added into the new node
 *
 * Return: returns the addres of the new element/node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (*head == NULL)
	{
		dlistint_t *ptr1;

		ptr1 = malloc(sizeof(dlistint_t));
		ptr1->n = n;
		ptr1->next = NULL;
		ptr1->prev = NULL;
		*head = ptr1;
		ptr1 = NULL;
	}
	else
	{
		dlistint_t *ptr2;

		ptr2 = malloc(sizeof(dlistint_t));
		ptr2->n = n;
		ptr2->next = *head;
		(*head)->prev = ptr2;
		ptr2->prev = NULL;
		*head = ptr2;
		ptr2 = NULL;
	}
	return (*head);
}
