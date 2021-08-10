#include "holberton.h"

/**
 * _memset - sets the memory pointyed to with char
 * @a: the address in memory to fill
 * @b: the char variable to fill in the memory
 * @s: the memory size
 *
 * Return: pointer to string
 */

char *_memset(char *a, char b, unsigned int s)
{
	unsigned int unt;

	for (unt = 0; unt < s; unt++)
	a[unt] = b;

	return (a);
}
