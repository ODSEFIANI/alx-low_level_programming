#include "main.h"

/**
 * clear_bit - sets the value of a bit to a zero
 * @n: pointer to the number to change
 * @index: index of the bit to clear(zero)
 * Return: one if success, minus one for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
