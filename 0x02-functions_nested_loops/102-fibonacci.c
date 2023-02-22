#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 * less than 4000000
 * Return: Nothing
 */

int main(void)

{

	int i = 0;
	long j =i, k = 2;

	while(i < 58)
	{
	if (i ==  0)
	printf("%ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
