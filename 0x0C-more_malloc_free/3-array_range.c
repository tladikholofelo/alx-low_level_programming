#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the first value of the array
 * @max: the last value of the array
 *
 * The array created should contain all the values from min (included),
 * to max (included), ordered from min to max.
 *
 * Return: If min > max, return NULL. If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, p = min;

	if (min > max)
	{
		return (0);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
	{
		return (0);
	}

	while (i <= max - min)
		arr[i++] = p++;

	return (arr);
}
