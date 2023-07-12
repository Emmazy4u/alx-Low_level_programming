#include "main.h"

/**
 * _putchar - Prints a character on the screen
 * @c: Parameter taken in
 * Return: Returns the character as required
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
