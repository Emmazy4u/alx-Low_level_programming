#include "lists.h"

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
        return(count);
    }
    return (count);
}
