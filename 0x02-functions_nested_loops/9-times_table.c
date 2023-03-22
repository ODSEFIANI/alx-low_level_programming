#include "main.h"
/**
 * times_table -  prints the 9 times table
 *
 *
 * Return: Always void
 *
 */

void times_table(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 9; j++)
		{
			a = i * j;
			if (a >= 10)
				_putchar('0' + a / 10);
			else
				_putchar(' ');
			_putchar('0' + a % 10);
			_putchar(',');
			_putchar(' ');
		}
		a = i * j;
		if (a >= 10)
			_putchar('0' + a / 10);
		else
			_putchar(' ');
		_putchar('0' + a % 10);
		_putchar('\n');
	}
}
