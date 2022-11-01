#include "main.h"

/**
 * *_memset _ a function that fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Character to copy
 * @n: Number of times to copy b
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
