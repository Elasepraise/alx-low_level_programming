#include <stdlib.h>


/**
 * create_array - creates an array and init with one char
 * @size: the size of array to print
 * @c: the char tobe initilized with
 *
 * Return: pointer or 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;
	if (size != 0)
		arr = malloc(size * sizeof(c));
	else
		return (NULL);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
