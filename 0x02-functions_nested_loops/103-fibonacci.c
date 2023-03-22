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
	long a, b, c, s;

	a = 1;
	b = 1;
	s = 0;
	while (b < 4000000)
	{
		if (b % 2 == 0)
			s += b;
		c = b;
		b = a + b;
		a = c;
	}
	printf("%ld\n", s);
	return (0);
}
