#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 * @#: the character to print the triangle
 * Return: nothing
 */
void print_triangle(int n)
{
	int h, t;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (t = n; t > o; t++)
				_putchar(' ');

			for (t = 0; t < h; t++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
