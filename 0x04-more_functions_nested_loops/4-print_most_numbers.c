#include "maih.h"

/*
 * print_most_numbers - print numbers from 0 to 9
 * without 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');

		a++;
	}
	_putchar('\n');
}
