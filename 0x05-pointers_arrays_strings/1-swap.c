#include "main.h"

/**
 * swap_int - swaps values of intergers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
