#include "holberton.h"
/**
 * _isupper - function that checks for uppercase character.
 * @b: the int for the paramaters of the function used.
 * Return: 0
 */
int _isupper(int b)
{
	if (b >= 'A' && b <= 'Z')
		return (1);
	else
		return (0);
}
