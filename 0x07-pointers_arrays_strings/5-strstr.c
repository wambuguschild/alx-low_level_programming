#include "main.h"
#include <stddef.h>

/**
 * *_strstr - function that finds the first occurence of substring in a string
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to beginning of the located substring
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL)
}
