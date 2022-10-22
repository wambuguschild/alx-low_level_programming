#include "main.h"

/**
 * _isdigit - checks if the char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int j = 0;

	if (c >= '0' && c <= '9')
		j = 1;

	return (j);
}
