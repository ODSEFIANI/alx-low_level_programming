#include "main.h"

/**
 * set_bit - sets a bit of a given index to one
 * @n: pointer to the number to change
 * @index: index of a bit to set to one
 * Return: one for success, minus one for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
