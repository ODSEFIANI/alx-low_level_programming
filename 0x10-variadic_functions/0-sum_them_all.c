#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all the  parameters.
 * @n: number of arguments
 *
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum, i;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
