#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - looks for an integer.
 * @array: an  array
 * @size: size of an array
 * @cmp: pointer to the function that you will use
 *
 * Return: index of an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
