#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that finds the first occurence of substring in a string
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to beginning of the located substring
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
