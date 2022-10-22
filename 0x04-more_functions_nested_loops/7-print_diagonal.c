#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int j, w;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j < n; j++)
	{
		for (w = 0; w < j; w++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
