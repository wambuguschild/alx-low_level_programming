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
	int n, j;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[n + j] != needle[j])
				break;
		}
		if (needle[j])
			return (&haystack[n]);
	}
	return (NULL);
}
