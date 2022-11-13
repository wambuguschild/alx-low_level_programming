#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatanates n bytes between two strings
 * @s1: string to concatenate
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to conatenate s1
 * Return: if function fails to NULL
 * Otherwise - pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
		return (NULL);
	l == 0;

	for (i = 0; s1[i]; i++)
		c[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c[l++] = s2[i];
	c[l] = '\0';

	return (c);
}
