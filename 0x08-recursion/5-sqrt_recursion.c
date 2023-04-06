#include "main.h"

/**
 * fun -  fun
 *@a: int
 *@b: int
 * Return: int
 */
int fun(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a < b)
		return (fun(a + 1, b));
	return (-1);
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *@n: the number
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (fun(1, n));
}
