#include "main.h"
#include <unistd.h>
/**
 * _putchar - Will display the inputed value to stdout
 * @c: Character pointer to be printed.
 *
 * Return: success is value 1.
 * On error, value -1 returned, errno is then set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
