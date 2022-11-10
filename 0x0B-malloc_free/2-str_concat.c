#include "main.h"
#include <stdlib.h>

/**
 * str_concat - functtion that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: if error - NULL
 * Otherwise pointer should point to a newly allocated space in memory
 * containing concatenated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *j;
	int i, k = 0, n = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		n++;

	j = malloc(sizeof(char) * n);

	if (j == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		j[k++] = s1[i];

	for (i = 0; s2[i]; i++)
		j[k++] = s2[i];

	return (j);
}
