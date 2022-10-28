#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to be copied
 * @n: bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
