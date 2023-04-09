#include "main.h"

/**
 * set_bit - Would set a bit at a given index to be 1
 * @n: The pointer to the number that will be changed.
 * @index: The index of the bit to be set as 1.
 *
 * Return: value 1 is success and value -1 is failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
