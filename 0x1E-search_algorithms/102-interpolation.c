#include <stdio.h>
#include <math.h>
#include "search_algos.h"
#include <stdlib.h>


/**
 * interpolation_search - searchng algo
 * @array:teh array to be sorted
 * @size: size of arr
 * @value: the value we are looking for
 *
 * Return: index of the value
 */
 int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, position;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;
	while (l <= h)
	{
		position = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%ld]", position);
		if (position >= size)
		{
			printf(" is out of range\n");
			return (-1);
		}
		printf(" = [%d]\n", array[position]);
		if (value > array[position])
			l = position + 1;
		else if (value < array[position])
			h = position - 1;
		else
			return (position);
	}
	return (-1);
}
