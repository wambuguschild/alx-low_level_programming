#include "function_pointer.h"

/**
 * int_index - searches for an interger
 * @size: size of the array
 * @array: the array
 * @cmp: pointer to the function to use to compare values
 *
 * Return: index of the first element for which cmp function does not return 0
 * if no element matches or size <= 0 - -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j] != 0)
				return (j);
	}

	return (-1);
}
