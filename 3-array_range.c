#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates array
 * @minv: min value
 * @maxv: max value
 * Return: pointer to array
 */
int *array_range(int minv, int maxv)
{
	int *arr;
	int length;
	int i = 0;

	if (minv > maxv)
		return (NULL);
	length = maxv - minv + 1;
	arr = malloc(length * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < length)
	{
		arr[i] = minv + i;
		i++;
	}
	return (arr);
}
