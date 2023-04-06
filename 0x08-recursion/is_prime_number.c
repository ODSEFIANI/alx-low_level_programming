#include "main.h"

/**
 * prime -  fun
 *@a: int
 *@b: int
 * Return: int
 */
int prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	if (a > b / 2)
		return (1);
	return (prime(a + 1, b));
}
/**
 * is_prime_number -   returns 1 if the input integer is a prime number
 *@n: the number
 * Return: 1 if primary else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime(2, n));
}

