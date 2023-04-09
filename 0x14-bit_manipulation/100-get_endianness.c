#include "main.h"

/**
 * get_endianness - Would check the endianness of the machine.
 * Return: value 0 for big and value 1 for little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
