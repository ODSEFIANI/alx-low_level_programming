#include <stdio.h>
/* headers goes here */

/**
 * main - computes nd prints the sum of all the multiples of 3 or 5 below 1024
 *
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	long a, b, c, i;
	
	a = 1;
	b = 1;
	for (i = 0; i < 98; i++)
	{
		printf("%ld", b);
		c = b;
		b = a + b;
		a = c;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
