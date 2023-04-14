#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates integer array.
 * @min: min
 * @max: max
 *
 * Return: a pointer.
 */
int *array_range(int min, int max)
{
	int i, n;
	int *arr;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	arr = (int *)malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i - min] = i;
	return (arr);
}
