#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: is the number of elements in array
 * value: is the value to search for
 * Return: If value is not present in array
 * if array is NULL, your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t step = sqrt(size);
	size_t prev = 0;

	while (array[fmin(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;

		if (prev == fmin(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
