#include <stdio.h>
#include <math.h>
#include "search_algos.h"
#include <stdlib.h>


/**
 * jump_search - searchng algo
 * @array:teh array to be sorted
 * @size: size of arr
 * @value: the value we are looking for
 *
 * Return: index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = 0;

	if (array == NULL)
		return (-1);

	while (value > array[end])
	{
		if (end == size - 1)
			break;
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end = end + sqrt(size);
		if (end >= size)
			end = size - 1;
		if (start >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	while (value >= array[start])
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
		if (start == size)
			return (-1);
	}
	return (-1);
}
