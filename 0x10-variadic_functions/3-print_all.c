#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  prints anything.
 * @format: list of parameters type
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char c, *step = "", *str;

	va_start(ap, format);
	if (!format)
	{
		printf("\n");
		va_end(ap);
		return;
	}
	while (format[i] != '\0')
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%s%c", step, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", step, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", step, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", step, str);
				break;
			default:
				i++;
				continue;
		}
		i++;
		step = ", ";
	}
	printf("\n");
	va_end(ap);
}
