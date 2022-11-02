#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: two dimension array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int j, w;

	for (j = 0; j < 8; j++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[j][w]);
		}
		_putchar('\n');
	}
}
