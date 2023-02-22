#include "main.h"
  2 /**
     * main - Prints the sum of all multiples of 3 or 5 up to 1024
  4  * Return: always (Success)
  6  */
  int main(void)

{
	int i, z = 0;
	wile (i < 1024)
	{
	if ((i % 3 == 0)|| (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
