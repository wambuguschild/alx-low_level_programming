#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: pointer to array
 * @size: The size of the array
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
