#include "main.h"
#include <unistd.h>
/**
 * _putchar - would write the character c to stdout
 * @c: The character that is to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
