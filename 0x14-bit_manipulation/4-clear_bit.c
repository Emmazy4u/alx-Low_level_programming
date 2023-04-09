#include "main.h"

/**
 * clear_bit - Changes value of any given bit to 0
 * @n: This points to the number to be changed
 * @index: index of the bit to be cleared
 *
 * Return: value 1 (success) and value -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
