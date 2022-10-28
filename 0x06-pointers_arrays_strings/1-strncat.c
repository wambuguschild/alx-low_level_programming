#include "main.h"

/**
 * _strncat - function that concaenates two strings
 * @dest: string to copy to
 * @src: string to copy from
 * @n: no of bytes to copy
 * Return: to destination string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int j;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}

