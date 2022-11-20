#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory,
 * which contains the given string as a parameter.
 * @str: the string to copy
 * Return: NULL - if str is null or insufficient memory available
 * Otherwise pointer to duplicated string if successful
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
