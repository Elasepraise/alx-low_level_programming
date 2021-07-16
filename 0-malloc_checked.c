#include "holberton.h"
#include <stdlib.h>

/**
 *  memory allocator
 * @s: bytes
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int s)
{
	void *m;

	m = malloc(s);
	if (!m)
	{
		exit(98);
	}
	return (m);
}
