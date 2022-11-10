#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of char,
 * and initializes it with a specific char
 * @size: size of the array to initialize
 * @c: the specific char to initialize the array with.
 *
 * Return: If size is 0 or if it fails null, ponter to the array if succes
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int w;

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(char) * size);

	if (j == NULL)
		return (NULL);

	for (w = 0; w < size; w++)
		j[w] = c;

	return (w);
}
