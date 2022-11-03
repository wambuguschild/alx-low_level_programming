#include "main.h"

/**
 * _pow_recursion - function that returns value of x raised to power of y
 * @x: value raised
 * @y: power of
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
