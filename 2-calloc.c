#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @n: number of elements
 * @s: size in bytes
 *
 * Return: void pointer
 */
void *_calloc(unsigned int n, unsigned int s)
{
	char *m;
	unsigned int i= 0;

	if (n == 0 || s == 0)
		return (NULL);
	m = malloc(n * s);
	if (m == NULL)
		return (NULL);
	while (i < n * s)
	{
		*(m + i) = 0;
		i++;
	}
	return ((void *) m);
}
