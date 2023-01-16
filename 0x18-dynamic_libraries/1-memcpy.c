#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @src: memory to be copied
 * @dest: destination of the copied memory
 * @n: the bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
