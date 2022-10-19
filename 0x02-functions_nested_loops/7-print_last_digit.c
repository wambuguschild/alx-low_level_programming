#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int k = n % 10;

	if (k < 0)
		k *= -1;

	_putchar(k + '0');

	return (0);
}
