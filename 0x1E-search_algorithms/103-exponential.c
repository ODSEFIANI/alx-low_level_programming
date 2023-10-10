#include <stdio.h>
#include <math.h>
#include "search_algos.h"
#include <stdlib.h>


/**
 * exponential_search - searchng algo
 * @array:teh array to be sorted
 * @size: size of arr
 * @value: the value we are looking for
 *
 * Return: index of the value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 1, i, mid;

	if (array == NULL)
		return (-1);

	while (value > array[right])
	{
		if (right >= size - 1)
			break;
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right *= 2;
		if (right >= size)
			right = size - 1;
		if (left >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
