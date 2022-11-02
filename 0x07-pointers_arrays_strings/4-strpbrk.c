#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - function that locates the first occurence of any bytes
 * @s: the string to search
 * @accept: string contaning the bytes to look for
 * Return: pointer to thr byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
