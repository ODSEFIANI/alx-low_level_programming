#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	unsigned long int i, n = strlen(str) / 2;

	if (strlen(str) % 2 == 1)
		n++;
	for (i = n; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
