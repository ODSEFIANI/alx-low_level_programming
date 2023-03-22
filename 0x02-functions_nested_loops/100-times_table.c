#include "main.h"

/**
 * print_times_table -  prints the n times table
 *
 *@n: the number
 *
 * Return: Always void
 *
 */

void print_times_table(int n)
{
	int i, j, a;

	if (n > 15 || n < 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= n; j++)
		{
			a = i * j;
			if (a >= 100)
				_putchar('0' + a / 100);
			else
				_putchar(' ');
			if (a >= 10)
				_putchar('0' + (a % 100) / 10);
			else
				_putchar(' ');
			_putchar('0' + a % 10);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
