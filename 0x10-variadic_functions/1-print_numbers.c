#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (!separator || i == 0)
			printf("%d", va_arg(ptr, int));
		else
			printf("%s%d", separator, va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
