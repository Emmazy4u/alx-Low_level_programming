#include "main.h"

/**
 * flip_bits - Would count the number of bits be flipped
 *
 * @n: For the first number.
 * @m: For the second number.
 *
 * Return: The number of bits to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
