#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searching algorithm
 * using the Binary search algorithm
 * @array:teh array to be sorted
 * @size: size of arr
 * @value: the value we are looking for
 *
 * Return: index of the value
 */

 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (value > array[mid])
			l = mid + 1;
		else if (value < array[mid])
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
