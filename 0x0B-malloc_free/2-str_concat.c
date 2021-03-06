#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenate (combine) two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new space, Return NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *s3, *empt;
	int u, len1, len2, j;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	u = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	u = 0;
	while (u < len1)
	{
		s3[u] = s1[u];
		u++;
	}
	j = 0;
	while (j <= len2)
	{
		s3[u] = s2[j];
		u++;
		j++;
	}
	return (s3);
}
